#include "Observer.hpp"
#include <iostream>

// ===== Mobile =====
MobileObserver::MobileObserver(std::string name)
{
    this->name = name;
}

void MobileObserver::update(int price)
{
    std::cout << "Mobile " << name << " notified. Price: " << price << "\n";
}

// ===== Web =====
WebObserver::WebObserver(std::string name)
{
    this->name = name;
}

void WebObserver::update(int price)
{
    std::cout << "Web " << name << " notified. Price: " << price << "\n";
}