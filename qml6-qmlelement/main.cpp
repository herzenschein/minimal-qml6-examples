#include <QGuiApplication>
#include <QQmlApplicationEngine>


int main(int argCount, char* argVector[])
{
    QGuiApplication qmlElementApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.loadFromModule("com.example.qmlelement", "Main");

    qmlElementApp.exec();
}
