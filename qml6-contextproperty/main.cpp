#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "MyFunctionsFromCPPToQml.hpp"

int main(int argCounter, char* argVector[])
{
    QGuiApplication contextPropertyApp(argCounter, argVector);

    QQmlApplicationEngine engine;

    MyFunctionsFromCPPToQml myFunctionsInstance;

    engine.rootContext()->setContextProperty("MyCPPFunctions", &myFunctionsInstance);

    engine.load("qrc:/ContextPropertyExample/main.qml");

    contextPropertyApp.exec();
}
