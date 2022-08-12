#include <QGuiApplication>
#include <QQmlApplicationEngine>


int main(int argCount, char* argVector[])
{
    QGuiApplication qmlElementApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.load("qrc:/QmlFromCpp/main.qml");

    qmlElementApp.exec();
}
