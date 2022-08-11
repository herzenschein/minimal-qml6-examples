#include "registersingleton.hpp"

const QString &RegisterSingleton::getName() const
{
    return m_name;
}

void RegisterSingleton::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

int RegisterSingleton::getAge() const
{
    return m_age;
}

void RegisterSingleton::setAge(int newAge)
{
    if (m_age == newAge)
        return;
    m_age = newAge;
    emit ageChanged();
}

const QString &RegisterSingleton::getThing() const
{
    return m_thing;
}

void RegisterSingleton::setThing(const QString &newThing)
{
    if (m_thing == newThing)
        return;
    m_thing = newThing;
    emit thingChanged();
}
