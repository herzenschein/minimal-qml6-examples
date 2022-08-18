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
    // marks this class as a singleton,
    // so no qmlRegister* functions anymore!
    QML_SINGLETON

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int age READ getAge WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString thing READ getThing WRITE setThing NOTIFY thingChanged)

public slots:
    const QString &getName() const;
    void setName(const QString &newName);

    int getAge() const;
    void setAge(int newAge);

    const QString &getThing() const;
    void setThing(const QString &newThing);

signals:
    void nameChanged();
    void ageChanged();
    void thingChanged();

public:

    // This is a minimal *unsafe* factory function.
    // Prefer the safety measures of the fourth example in:
    // https://doc.qt.io/qt-6/qqmlengine.html#QML_SINGLETON
    static Singleton *create(QQmlEngine*, QJSEngine*);

private:
    // If we were to use the factory function above,
    // we could hide the default constructor.
    Singleton() = default;

    // If the constructor were defaulted,
    // it would not be necessary to value initialize here.
    QString m_name = "";
    int m_age = 0;
    QString m_thing = "";
};
