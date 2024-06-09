#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argCount, char* argVector[])
{
    QGuiApplication pragmaSingletonApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.loadFromModule("com.example.pragmasingleton", "Main");

    pragmaSingletonApp.exec();
}
