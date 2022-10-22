#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argCount, char* argVector[])
{
    QGuiApplication app(argCount, argVector);
    QQmlApplicationEngine engine;
    engine.load("qrc:/conan/main.qml");
    app.exec();
}
