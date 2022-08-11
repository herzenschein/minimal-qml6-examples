#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "registersingleton.hpp"

int main(int argCount, char* argVector[])
{
    QGuiApplication registerSingletonApp(argCount, argVector);

    QQmlApplicationEngine engine;

    RegisterSingleton mySingletonInstance;

    // The hard part is the fifth parameter, the callback.
    // The lambda simply returns &mySingletonInstance
    // whenever the singleton is called.
    qmlRegisterSingletonType<RegisterSingleton>
            ("SingletonImport",
             0, 1,
             "MySingleton",
             [&mySingletonInstance](QQmlEngine *, QJSEngine *) -> QObject * { return &mySingletonInstance; });

    engine.load("qrc:/RegisterSingletonExample/main.qml");

    registerSingletonApp.exec();
}
