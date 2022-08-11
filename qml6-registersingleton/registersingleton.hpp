#include <QObject>
#include <QQmlEngine>

class RegisterSingleton : public QObject
{
    Q_OBJECT

    // Properties to be altered when called from QML.
    // Most functions were made by right clicking
    // each Q_PROPERTY and selecting Refactor -> Generate missing member functions.
    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int age READ getAge WRITE setAge NOTIFY ageChanged)
    Q_PROPERTY(QString thing READ getThing WRITE setThing NOTIFY thingChanged)

public:
    const QString &getName() const;
    void setName(const QString &newName);

    int getAge() const;
    void setAge(int newAge);

    const QString &getThing() const;
    void setThing(const QString &newThing);

    // This is one of the defining traits of a singleton:
    // A static getter is the only way to get a pointer to the current instance.
    // In this case, the only instance is created inside this function.
    static QObject *getInstance(QQmlEngine *engine, QJSEngine *scriptEngine)
    {
        Q_UNUSED(engine);
        Q_UNUSED(scriptEngine);
        RegisterSingleton *onlyInstance = new RegisterSingleton();
        return onlyInstance;
    }

signals:
    void nameChanged();

    void ageChanged();

    void thingChanged();


private:
    QString m_name = "";
    int m_age = 0;
    QString m_thing = "";

    // Bonus: put the constructor in the private section
    // so it can't be manually instantiated.
    explicit RegisterSingleton(){};

    // Bonus: delete the copy and move constructors,
    // in case someone attempts to copy or move them.
    // Example of a singleton copy:
    // RegisterSingleton copycat = RegisterSingleton::getInstance().
    RegisterSingleton (const RegisterSingleton&) = delete;
    RegisterSingleton (RegisterSingleton&&) = delete;

    // Bonus: delete the copy and move operators too.
    RegisterSingleton operator=(const RegisterSingleton&) = delete;
    RegisterSingleton operator=(RegisterSingleton&&) = delete;

};
