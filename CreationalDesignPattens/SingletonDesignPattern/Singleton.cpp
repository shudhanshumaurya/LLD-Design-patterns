#include "Singleton.hpp"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
    std::cout << "Singleton instance created\n";
}

Singleton* Singleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::showMessage()
{
    std::cout << "Hello from Singleton\n";
}