#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "registersingleton.hpp"

int main(int argCount, char* argVector[])
{
    QGuiApplication registerSingletonApp(argCount, argVector);

    QQmlApplicationEngine engine;

    //Impossible to instantiate because its constructor is private
    //RegisterSingleton mySingletonInstance;

    qmlRegisterSingletonType<RegisterSingleton>
            ("SingletonImport",
             0, 1,
             "MySingleton",
             &RegisterSingleton::getInstance);

    engine.load("qrc:/RegisterSingletonExample/main.qml");

    registerSingletonApp.exec();
}
