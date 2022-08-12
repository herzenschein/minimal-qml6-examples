#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argCount, char* argVector[])
{
    QGuiApplication registerSingletonApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.load("qrc:/SingletonExample/main.qml");

    registerSingletonApp.exec();
}
