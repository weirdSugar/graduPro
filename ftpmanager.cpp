#include<QFileInfo>
#include<FTPmanager.h>

FtpManager :: FtpManager(QObject *parent)
    :QObject (parent)
{
    // 设置协议
    m_pUrl.setScheme("ftp");
}

//set ip port
void  FtpManager :: setHostPort(const QString &host, int port)
{
    m_pUrl.setHost(host);
    m_pUrl.setPort(port);
}

void FtpManager :: setUserInfo(const QString &username, const QString &password)
{
    m_pUrl.setUserName(username);
    m_pUrl.setPassword(password);
}

void FtpManager :: post(const QString &filename,const QString &path)
{
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QByteArray data = file.readAll();

    m_pUrl.setPath(path);
    QNetworkReply *pReply = m_manager.put(QNetworkRequest(m_pUrl),data);

    connect(pReply, SIGNAL(uploadProgress(qint64, qint64)), this, SIGNAL(uploadProgress(qint64, qint64)));
    connect(pReply, SIGNAL(error(QNetworkReply::NetworkError)), this, SIGNAL(error(QNetworkReply::NetworkError)));

}
