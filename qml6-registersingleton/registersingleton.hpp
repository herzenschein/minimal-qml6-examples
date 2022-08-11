#include <QObject>

class RegisterSingleton : public QObject
{
    Q_OBJECT

    // Properties to be altered when called from QML.
    // All functions were made by right clicking
    // each Q_PROPERTY and selecting Refactor -> Generate missing member functions.
    // None of them were typed. At all. Including the cpp file. :D
    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int age READ getAge WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString thing READ getThing WRITE setThing NOTIFY thingChanged)

public:
    // [[gnu::pure]] because getter functions should not have side effects,
    // therefore they must be pure functions.
    // Equivalent to __attribute__((pure)), compiler optimization.
    [[gnu::pure]] const QString &getName() const;
    void setName(const QString &newName);

    [[gnu::pure]] int getAge() const;
    void setAge(int newAge);

    [[gnu::pure]] const QString &getThing() const;
    void setThing(const QString &newThing);

signals:
    void nameChanged();

    void ageChanged();

    void thingChanged();

private:
    QString m_name;
    int m_age;
    QString m_thing;
};
