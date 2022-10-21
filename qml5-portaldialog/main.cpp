#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argCount, char* argVector[])
{
    QApplication app (argCount, argVector);
    QApplication::setOrganizationDomain("qml5-portaldialog");

    QQmlApplicationEngine engine;
    engine.load("qrc:/portaldialog/main.qml");
    app.exec();
}
