#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argCount, char* argVector[])
{
    QGuiApplication singletonApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.loadFromModule("com.example.singleton", "Main");

    singletonApp.exec();
}
