#include "mkmmanager.h"

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
