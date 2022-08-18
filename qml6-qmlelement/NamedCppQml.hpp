#pragma once
#include <QObject>
#include <QtQml>

class NamedCppQml : public QObject
{
    Q_OBJECT

    // This exposes properties with Q_PROPERTY and functions with Q_INVOKABLE / slots.
    // The exposed type will be the name defined inside the ( ).
    QML_NAMED_ELEMENT(NamedQml)

    // MEMBER can be replaced with READ and WRITE
    Q_PROPERTY(QString text MEMBER m_text NOTIFY textChanged)

public:
    QString m_text = "And this is exposed via QML_NAMED_ELEMENT and set from C++!";

signals:
    void textChanged();
};
