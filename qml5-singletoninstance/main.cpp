#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "singletoninstance.hpp"

int main(int argCount, char* argVector[])
{
    QGuiApplication singletonInstanceApp(argCount, argVector);

    qmlRegisterSingletonInstance("SingletonImport",
                                 1, 0,
                                 "SingletonInstance",
                                 SingletonInstance::get());
    QQmlApplicationEngine engine;
    engine.load("qrc:/Main/main.qml");

    singletonInstanceApp.exec();
}
