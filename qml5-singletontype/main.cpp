#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "singletontypecallback.hpp"

int main(int argCount, char* argVector[])
{
    QGuiApplication singletonInstanceApp(argCount, argVector);

    qmlRegisterSingletonType<SingletonType>
            ("SingletonImport",
             1, 0,
             "SingletonType",
             singletonTypeCallback);

    QQmlApplicationEngine engine;
    engine.load("qrc:/Main/main.qml");

    singletonInstanceApp.exec();
}
