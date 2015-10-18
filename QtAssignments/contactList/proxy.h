/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c Proxy -p proxy.h:proxy.cpp com.contact.info.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef PROXY_H_1388059277
#define PROXY_H_1388059277

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "contactinfo.h"
/*
 * Proxy class for interface com.contact.info
 */
class Proxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.contact.info"; }

public:
    Proxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~Proxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<contactList> GetContactDetails()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetContactDetails"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace com {
  namespace contact {
    typedef ::Proxy info;
  }
}
#endif