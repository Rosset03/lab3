#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    arduino_is_available = false;
    arduino_port_name = "";
    arduino = new QSerialPort;

    /*
    qDebug() << "Portas encontradas disponiveis: " << QSerialPortInfo::availablePorts().length();
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        qDebug() << "Tem vendor id: " << serialPortInfo.hasVendorIdentifier();
        if(serialPortInfo.hasVendorIdentifier()){
            qDebug() << "Vendor id: " << serialPortInfo.vendorIdentifier();            (essa parte do codigo foi feita para encontrar as informacoes
        }                                                                               do arduino)
        qDebug() << "Tem product id: " << serialPortInfo.hasProductIdentifier();
        if(serialPortInfo.hasProductIdentifier()){
            qDebug() << "Porduct id: " << serialPortInfo.productIdentifier();
        }
    }*/

    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()){   //ira percorrer as portas usb para encontrar em qual o arduino esta conectado
            if(serialPortInfo.vendorIdentifier() == arduino_vendor_id){                      // e ira ver se é o mesmo arduino atraves do vendor e product ID
                if(serialPortInfo.productIdentifier() == arduino_product_id){                //se for o correto ira atualizar o valor da porta
                    arduino_port_name = serialPortInfo.portName();
                    arduino_is_available = true;
                }
            }

        }
    }

    if(arduino_is_available){
        //a partir daqui foi configurada a porta serial de acordo com recomendaçoes que pesquisei
        arduino -> setPortName(arduino_port_name);
        arduino -> open(QSerialPort::WriteOnly); //acessa o arduino no modo de escrita
        arduino -> setBaudRate(QSerialPort::Baud9600);
        arduino -> setDataBits(QSerialPort::Data8); //arduino 8 bits
        arduino -> setParity(QSerialPort::NoParity);
        arduino -> setStopBits(QSerialPort::OneStop);
        arduino -> setFlowControl(QSerialPort::NoFlowControl);
    }else{
        QMessageBox::warning(this, "ERRO"," - O arduino nao foi encontrado");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "CHARGE foi pressionado!";
    command("MOTOR_ON");
}


void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "LEFT foi pressionado!";
    if (arduino->isWritable()) {
        arduino->write("SERVO_LEFT\n");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "RIGHT foi pressionado!";
    if (arduino->isOpen()) {
        arduino->write("SERVO_RIGHT\n");
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    qDebug() << "OFF foi pressionado!";
    if (arduino->isOpen()) {
        arduino->write("MOTOR_OFF\n"); // Desliga o motor da torreta
    }
}


void MainWindow::on_verticalSlider_valueChanged(int value)
{
    if (arduino->isOpen()) {
        // Calcula a potência como múltiplo de 25 devido ao ajuste de potencia escolhido
        int power = ((value + 24) / 25) * 25;     // Ajusta para 25, 50, 75 ou 100 por cento da força
        QString command = "POWER_" + QString::number(power) + "\n";
        arduino->write(command.toUtf8()); // Envia o comando com a potência desejada
    }
}

void MainWindow::command(QString comando)
{
    if(arduino -> isWritable()){
        arduino -> write(comando.toStdString().c_str());
    }
}

