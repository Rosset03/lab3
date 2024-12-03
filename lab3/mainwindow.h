#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_shootpushButton_clicked();

    void on_leftpushButton_2_clicked();

    void on_rightpushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;

    static const quint16 arduino_vendor_id;
    static const quint16 arduino_product_id;

    QString arduino_port_name;
    bool arduino_is_available;
};
#endif // MAINWINDOW_H
