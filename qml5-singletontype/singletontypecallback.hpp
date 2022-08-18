#pragma once
#include "singletontype.hpp"

// This is an out-of-class, minimal, *unsafe* factory function.
// Prefer the safety measures of the fourth example in:
// https://doc.qt.io/qt-6/qqmlengine.html#QML_SINGLETON
static QObject *singletonTypeCallback(QQmlEngine*, QJSEngine*)
{
    SingletonType *instance = nullptr;
    instance = new SingletonType();
    return instance;
}
