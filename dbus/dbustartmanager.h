/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusStartManager -p dbustartmanager com.deepin.StartManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSTARTMANAGER_H_1457934737
#define DBUSTARTMANAGER_H_1457934737

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.StartManager
 */
class DBusStartManager: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName !="com.deepin.StartManager")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
 	            Q_EMIT p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.StartManager"; }

public:
    DBusStartManager(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusStartManager();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<bool> AddAutostart(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("AddAutostart"), argumentList);
    }

    inline QDBusPendingReply<QStringList> AutostartList()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("AutostartList"), argumentList);
    }

    inline QDBusPendingReply<bool> IsAutostart(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("IsAutostart"), argumentList);
    }

    inline QDBusPendingReply<bool> Launch(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("Launch"), argumentList);
    }

    inline QDBusPendingReply<bool> LaunchWithTimestamp(const QString &in0, uint in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("LaunchWithTimestamp"), argumentList);
    }

    inline QDBusPendingReply<bool> RemoveAutostart(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("RemoveAutostart"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AutostartChanged(const QString &in0, const QString &in1);
// begin property changed signals
};

namespace com {
  namespace deepin {
    typedef ::DBusStartManager StartManager;
  }
}
#endif
