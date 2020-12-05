#ifndef MKMMANAGER_H
#define MKMMANAGER_H

#include <QObject>

class MKMManager : public QObject
{
    Q_OBJECT
public:
    MKMManager(const QString &appToken, const QString &appSecret, const QString &accessToken, const QString &accessTokenSecret, QObject *parent = nullptr);
    void request(const QString &url);

private:
    QString mAppToken;
    QString mAppSecret;
    QString mAccessToken;
    QString mAccessTokenSecret;
};

#endif // MKMMANAGER_H
