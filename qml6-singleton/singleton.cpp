#include "singleton.hpp"

const QString &Singleton::getName() const
{
    return m_name;
}

void Singleton::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

int Singleton::getAge() const
{
    return m_age;
}

void Singleton::setAge(int newAge)
{
    if (m_age == newAge)
        return;
    m_age = newAge;
    emit ageChanged();
}

const QString &Singleton::getThing() const
{
    return m_thing;
}

void Singleton::setThing(const QString &newThing)
{
    if (m_thing == newThing)
        return;
    m_thing = newThing;
    emit thingChanged();
}
