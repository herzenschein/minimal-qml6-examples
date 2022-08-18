#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argCount, char* argVector[])
{
    QGuiApplication singletonApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.load("qrc:/SingletonExample/main.qml");

    singletonApp.exec();
}
