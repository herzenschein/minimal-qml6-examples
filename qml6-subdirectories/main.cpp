#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QtQml/qqmlextensionplugin.h>

Q_IMPORT_QML_PLUGIN(MainPlugin)
Q_IMPORT_QML_PLUGIN(TextRowPlugin)
Q_IMPORT_QML_PLUGIN(StringsPlugin)

int main (int argCount, char* argVector[])
{
    QGuiApplication subdirectoryExampleApp(argCount, argVector);

    QQmlApplicationEngine engine;
    engine.addImportPath("qrc:/");
    engine.load("qrc:/Main/main.qml");

    subdirectoryExampleApp.exec();
}
