#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QTableView>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Initsth();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_uploadButton_clicked()
{
    file = new QFile("E:\\tt.txt");
    file->open(QIODevice::ReadOnly);
    QByteArray byte_file = file->readAll();

    QNetworkAccessManager *accessManager = new QNetworkAccessManager(this);
    accessManager->setNetworkAccessible(QNetworkAccessManager::Accessible);
    QString path = "ftp://" + serverIp + "/test4FTP/success";
    //QUrl url("ftp://192.168.2.12/home/test/" + ui->lineEdit->text()+ ".SPE");
    QUrl url(path);
    url.setPort(portNumebr);
    url.setUserName(userName);
    url.setPassword(passWord);

    QNetworkRequest request(url);
    reply = accessManager->put(request, byte_file);

    //ui->progressBar = new QProgressBar();
    ui->progressBar->setValue(0);
    ui->progressBar->show();

    connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(loadError(QNetworkReply::NetworkError)));
    connect(reply, SIGNAL(uploadProgress(qint64 ,qint64)), this, SLOT(loadProgress(qint64 ,qint64)));

}


void MainWindow::replyFinished(QNetworkReply*)    //删除指针，更新和关闭文件
{
    if(reply->error() == QNetworkReply::NoError)
        {
            reply->deleteLater();
            file->flush();
            file->close();
        }
        else
        {
            QMessageBox::critical(NULL, tr("Error"), "Failed!!!");
        }
}

void MainWindow::loadProgress(qint64 bytesSent, qint64 bytesTotal)    //更新进度条
{
       qDebug() << "loaded" << bytesSent << "of" << bytesTotal;
       ui->progressBar->setMaximum(bytesTotal); //最大值
       ui->progressBar->setValue(bytesSent);  //当前值
}

void MainWindow::loadError(QNetworkReply::NetworkError)    //传输中的错误输出
{
     qDebug()<<"Error: "<<reply->error();
}


void MainWindow::Initsth()
{
    //change title
//    setWindowTitle(tr("FTP Client"));
    QTableWidget* table = new QTableWidget(this); //创建一个表格
    table->resize(550,400);
    table->move(16,186);
    table->verticalHeader()->hide();
    table->horizontalHeader()->setStretchLastSection(true);
    table->setRowCount(18);    //设置行数
    table->setColumnCount(3); //设置列数
    table->setHorizontalHeaderLabels(QStringList()<<"类型"<<"文件名"<<"时间"); //设置行头
    table->setItem(0,0,new QTableWidgetItem("item1")); //设置表格内容
    //ftp parameter
    serverIp = "207.246.78.45";
    portNumebr = 21;
    userName = "root";
    passWord = "ohno";

    qDebug()<<"serverIp："<<serverIp<<endl;
    qDebug()<<"port："<<portNumebr<<endl;
    qDebug()<<"userName："<<userName<<endl;
    qDebug()<<"passWord："<<passWord<<endl;

}
