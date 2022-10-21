#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argCount, char* argVector[])
{
    QApplication app (argCount, argVector);
    QQmlApplicationEngine engine;
    engine.load("qrc:/portaldialog/main.qml");
    app.exec();
}
