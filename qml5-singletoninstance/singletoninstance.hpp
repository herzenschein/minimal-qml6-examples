#pragma once
#include <QObject>
#include <QQmlEngine>

class SingletonInstance : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(int age MEMBER m_age NOTIFY ageChanged)
    Q_PROPERTY(QString thing MEMBER m_thing NOTIFY thingChanged)

signals:
    void nameChanged();
    void ageChanged();
    void thingChanged();

public:
    // This is an in-class, minimal, *unsafe* factory function.
    // With this, it's possible to hide the constructor.
    // Prefer the safety measures of the fourth example in:
    // https://doc.qt.io/qt-6/qqmlengine.html#QML_SINGLETON
    static SingletonInstance *get();

private:
    SingletonInstance() = default;

    QString m_name;
    int m_age = 0;
    QString m_thing;
};

// This is an out-of-class, minimal, *unsafe* factory function.
// With this, it is NOT possible to hide the constructor.
//static SingletonInstance *get()
//{
//    SingletonInstance *instance = nullptr;
//    instance = new SingletonInstance;
//    return instance;
//}
