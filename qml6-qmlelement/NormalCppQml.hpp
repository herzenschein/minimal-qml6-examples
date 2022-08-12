#include <QObject>
#include <QtQml>

class NormalCppQml : public QObject
{
    Q_OBJECT

    // This exposes properties with Q_PROPERTY and functions with Q_INVOKABLE / slots.
    // The exposed type will be the exact name of the class.
    QML_ELEMENT

    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)

public:

    Q_INVOKABLE QString title()
    {
        return "Minimal QML6 QML_ELEMENT Example";
    };

public slots:

    const QString &getText() const
    {
        return m_Text;
    };

    void setText(const QString &newText)
    {
        if (m_Text == newText)
            return;
        m_Text = newText;
        emit textChanged();
    };

private:
    QString m_Text;

signals:
    void textChanged();
};




