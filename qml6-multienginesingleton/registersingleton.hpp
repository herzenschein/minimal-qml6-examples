#pragma once
#include <QObject>
#include <QtQml/qqml.h>
class RegisterSingleton : public QObject
{
    Q_OBJECT

    // This exposes this class in QML
    // as a type with the same name as the class.
    QML_ELEMENT

    // This, paired with qt_add_qml_module,
    // marks this class as a singleton,
    // so no qmlRegisterSingletonType
    // or qmlRegisterSingletonInstance anymore!
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


private:
    QString m_name = "";
    int m_age = 0;
    QString m_thing = "";
};
