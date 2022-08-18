#pragma once
#include <QObject>
#include <QQmlEngine>

class SingletonType : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(int age MEMBER m_age NOTIFY ageChanged)
    Q_PROPERTY(QString thing MEMBER m_thing NOTIFY thingChanged)

signals:
    void nameChanged();
    void ageChanged();
    void thingChanged();

private:
    QString m_name;
    int m_age;
    QString m_thing;
};

