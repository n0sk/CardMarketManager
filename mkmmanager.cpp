#include "mkmmanager.h"

#include <QDateTime>
#include <QDebug>

MKMManager::MKMManager(const QString &appToken,
                       const QString &appSecret,
                       const QString &accessToken,
                       const QString &accessTokenSecret,
                       QObject *parent)
    : QObject(parent),
      mAppToken(appToken),
      mAppSecret(appSecret),
      mAccessToken(accessToken),
      mAccessTokenSecret(accessTokenSecret)
{

}

void MKMManager::request(const QString &url)
{
    QString realm = url;
    QString oauthVersion = "1.0";
    QString oauthConsumerKey = mAppToken;
    QString oauthToken = mAccessToken;
    QString oauthSignatureMethod = "HMAC-SHA1";
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString oauthTimestamp = QString::number(currentDateTime.toMSecsSinceEpoch() / 1000);
    QString oauthNonce = QString::number(currentDateTime.toMSecsSinceEpoch());
}
