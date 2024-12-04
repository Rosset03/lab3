#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSeri>

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
};
#endif // MAINWINDOW_H
