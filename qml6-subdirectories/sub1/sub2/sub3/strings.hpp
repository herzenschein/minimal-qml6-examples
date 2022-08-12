#include <QObject>
#include <QtQml>

class Strings : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON

    Q_PROPERTY(QString textForLabel MEMBER m_textForLabel NOTIFY textForLabelChanged)
    Q_PROPERTY(QString textForField MEMBER m_textForField NOTIFY textForFieldChanged)

signals:
    void textForLabelChanged();
    void textForFieldChanged();

private:
    QString m_textForLabel = "This string comes from<br><i>sub1/sub2/sub3/strings.hpp</i>";
    QString m_textForField = "This string too";
};
