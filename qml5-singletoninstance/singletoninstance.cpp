#include "singletoninstance.hpp"

SingletonInstance *SingletonInstance::get()
{
    SingletonInstance *instance = nullptr;
    instance = new SingletonInstance;
    return instance;
}
