#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "MyFunctionsFromCPPToQml.hpp"

int main(int argCounter, char* argVector[])
{
    QGuiApplication contextPropertyApp(argCounter, argVector);

    MyFunctionsFromCPPToQml myFunctionsInstance;

    QQmlApplicationEngine engine;

    // We can arbitrarily export individual properties globally.
    // By convention, it starts with an underscore.
    engine.rootContext()->setContextProperty("_windowtitle", QString("Minimal QML6 Context Property Example"));
    // Or we can export entire types and their respective properties.
    engine.rootContext()->setContextProperty("MyCPPFunctions", &myFunctionsInstance);

    engine.load("qrc:/ContextPropertyExample/main.qml");

    contextPropertyApp.exec();
}
