#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "MyFunctionsFromCppToQml.hpp"

int main(int argCounter, char* argVector[])
{
    QGuiApplication contextPropertyApp(argCounter, argVector);

    MyFunctionsFromCppToQml myFunctionsInstance;

    QQmlApplicationEngine engine;

    // We can arbitrarily export individual properties globally.
    // By convention, it starts with an underscore.
    engine.rootContext()->setContextProperty("_windowtitle", QString("Minimal QML6 Context Property Example"));
    // Or we can export entire types and their respective properties.
    engine.rootContext()->setContextProperty("MyCppFunctions", &myFunctionsInstance);

    // This method simply loads the file and is unnecessarily verbose:
    // engine.load("qrc:/qt/qml/com/example/contextproperty/Main.qml");

    // Instead use the following method, which loads a module directly
    // instead and is much less verbose:
    engine.loadFromModule("com.example.contextproperty", "Main");

    contextPropertyApp.exec();
}
