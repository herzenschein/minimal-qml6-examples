#include <QGuiApplication>
#include <QQmlApplicationEngine>

// This include is required to use the following plugin macros
#include <QtQml/qqmlextensionplugin.h>
Q_IMPORT_QML_PLUGIN(MainPlugin)
Q_IMPORT_QML_PLUGIN(TextRowPlugin)
Q_IMPORT_QML_PLUGIN(StringsPlugin)

int main (int argCount, char* argVector[])
{
    QGuiApplication subdirectoryExampleApp(argCount, argVector);

    QQmlApplicationEngine engine;
    // The import path is needed in case a custom output directory is set
    engine.addImportPath("qrc:/");
    engine.load("qrc:/Main/main.qml");

    subdirectoryExampleApp.exec();
}
