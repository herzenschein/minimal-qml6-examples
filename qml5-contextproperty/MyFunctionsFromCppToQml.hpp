#pragma once
#include <QObject>
#include <QDebug>
#include <QString>

class MyFunctionsFromCppToQml : public QObject
{
    Q_OBJECT


public:
    Q_INVOKABLE QString normalString()
    {
        return "Normal string returned from QML with Q_INVOKABLE";
    };

    Q_INVOKABLE void normalMethod()
    {
        qInfo() << "Normal method called from QML with Q_INVOKABLE";
    };

// C++ access modifiers apply the same for slots
public slots:
    QString publicString()
    {
            QString publicS = "Public string returned from QML";
            // Only way to access our private string
            QString privateS = privateString();
            return publicS + '\n' + privateS;
    };

    void publicSlot()
    {
        qInfo() << "Public slot called from QML";
        // Only way to access our private slot
        privateSlot();
    };

// C++ access modifiers apply the same for slots
private slots:
    QString privateString()
    {
        return "Private string returned";
    };

    void privateSlot()
    {
        qInfo() << "Private slot called";
    };
};
