#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "singletontypecallback.hpp"

int main(int argCount, char* argVector[])
{
    QGuiApplication singletonInstanceApp(argCount, argVector);

    // We do not instantiate SingletonType here,
    // but there's nothing hindering us from doing this
    // because the callback must be out-of-class,
    // and thus requires a public constructor.
    qmlRegisterSingletonType<SingletonType>
            ("SingletonImport",
             1, 0,
             "SingletonType",
             singletonTypeCallback);

    QQmlApplicationEngine engine;
    engine.load("qrc:/Main/main.qml");

    singletonInstanceApp.exec();
}
