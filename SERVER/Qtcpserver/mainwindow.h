#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_setListen_clicked();

    void on_sendMsg_clicked();

    void on_close_clicked();

private:
    Ui::MainWindow *ui;
    QTcpServer *m_s;
    QTcpSocket *m_tcp;
};

#endif // MAINWINDOW_H
