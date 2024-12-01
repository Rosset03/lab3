#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    arduino_is_available = false;
    arduino_port_name = "";
    arduino = new QSerialPort;
    int main(int argc, char *argv[]) {
        QCoreApplication a(argc, argv);

        // Lista todas as portas seriais disponíveis
        QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
        if (ports.isEmpty()) {
            qDebug() << "Nenhuma porta serial encontrada!";
        } else {
            qDebug() << "Portas seriais disponíveis:";
            for (const QSerialPortInfo &port : ports) {
                qDebug() << "Nome:" << port.portName();
                qDebug() << "Descrição:" << port.description();
                qDebug() << "Fabricante:" << port.manufacturer();
                qDebug() << "ID do Produto:" << port.productIdentifier();
                qDebug() << "ID do Fabricante:" << port.vendorIdentifier();
                qDebug() << "-----------------------";
            }
        }

        return a.exec();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_shootpushButton_clicked()
{
    qDebug() << "Charge pressed!";
}


void MainWindow::on_leftpushButton_2_clicked()
{
    qDebug() << "Left pressed!";
}


void MainWindow::on_rightpushButton_clicked()
{
    qDebug() << "Right pressed!";
}

