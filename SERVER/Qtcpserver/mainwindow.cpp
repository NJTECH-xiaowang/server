#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //创建监听的服务器对象
    m_s=new QTcpServer(this);   //挂在父对象上，不用我们自己释放
    //启动监听,等待连接信号的到来
    connect(m_s,&QTcpServer::newConnection,this,[=](){
       m_tcp=m_s->nextPendingConnection();

        //检测是否可以接受数据
        connect(m_tcp,&QTcpSocket::readyRead,this,[=]()
        {
            QByteArray data=m_tcp->readAll();
            //读取数据显示
            ui->record->append("客户端say: "+ data);
        });
    });
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_setListen_clicked()
{
   unsigned short port=9999;
   m_s->listen(QHostAddress::Any,port);
   //设置按钮不可以再次点击
   ui->setListen->setDisabled(true);
}

void MainWindow::on_sendMsg_clicked()
{
   QString msg=ui->msg->toPlainText();  //纯文本方式读取数据
   m_tcp->write(msg.toUtf8());
    ui->record->append("服务器say: "+ msg);

}

void MainWindow::on_close_clicked()
{
    this->close();
}
