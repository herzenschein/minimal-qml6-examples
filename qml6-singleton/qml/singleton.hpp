#pragma once
#include <QObject>
#include <QtQml/qqml.h>

class Singleton : public QObject
{
    Q_OBJECT

    // This exposes this class in QML
    // as a type with the same name as the class.
    //QML_ELEMENT

    // This does the same,
    // but with a specific type name
    QML_NAMED_ELEMENT(MySingleton)

    // This, paired with qt_add_qml_module,
    // registers this class as a singleton,
    // so no qmlRegister* functions anymore!
    QML_SINGLETON

    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)
    Q_PROPERTY(int age MEMBER m_age NOTIFY ageChanged)
    Q_PROPERTY(QString thing MEMBER m_thing NOTIFY thingChanged)

signals:
    void nameChanged();
    void ageChanged();
    void thingChanged();

public:
    // This is an optional, minimal, *unsafe* factory function.
    // Prefer the safety measures of the fourth example in:
    // https://doc.qt.io/qt-6/qqmlengine.html#QML_SINGLETON
    //static Singleton *create(QQmlEngine*, QJSEngine*);

private:
    // If we use the factory function above,
    // we can hide the default constructor.
    //Singleton() = default;

    // If the constructor were defaulted as above,
    // it would not be necessary to value initialize here.
    QString m_name = "";
    int m_age = 0;
    QString m_thing = "";
};
