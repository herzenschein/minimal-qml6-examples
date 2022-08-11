#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argCount, char* argVector[])
{
    QGuiApplication pragmaSingletonApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.load("qrc:/PragmaSingletonExample/main.qml");

    pragmaSingletonApp.exec();
}
