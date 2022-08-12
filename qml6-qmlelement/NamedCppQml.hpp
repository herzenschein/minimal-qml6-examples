#include <QObject>
#include <QtQml>

class NamedCppQml : public QObject
{
    Q_OBJECT

    // The only difference to QML_ELEMENT is that
    // this macro allows to set a different name for the exposed type.
    QML_NAMED_ELEMENT(NamedQml)

    // Just another example of creating properties
    Q_PROPERTY(QString text MEMBER m_Text NOTIFY textChanged)

public:
    QString m_Text = "And this is exposed via QML_NAMED_ELEMENT and set from C++"
;

signals:
    void textChanged();
};
