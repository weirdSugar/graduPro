#ifndef FTPMANAGER_H
#define FTPMANAGER_H


#include <QUrl>
#include <QFile>
#include <QNetworkReply>
#include <QNetworkAccessManager>

class FtpManager : public QObject
{
    Q_OBJECT

public:
    explicit FtpManager(QObject *parent = 0);
    //  设置ip端口
    void setHostPort(const QString &host, int port = 21);
    //  设置userinfo
    void setUserInfo(const QString &username, const QString &password);
    //  upload
    void post(const QString &filename,const QString &path);

signals:
    void error(QNetworkReply::NetworkError);
    // 上传进度
    void uploadProgress(qint64 bytesSent, qint64 bytesTotal);
    // 下载进度
//    void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);

//private slots:
    // 下载过程中写文件
//    void finished();

private:
    QUrl m_pUrl;
    QFile m_file;
    QNetworkAccessManager m_manager;
};
#endif // FTPMANAGER_H
