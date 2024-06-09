#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main (int argCount, char* argVector[])
{
    QGuiApplication subdirectoryExampleApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.loadFromModule("com.example.subdirectories.main", "Main");

    subdirectoryExampleApp.exec();
}
