#include "Subject.hpp"

// ===== Attach =====
void Stock::attach(Observer* obs)
{
    observers.push_back(obs);
}

// ===== Detach =====
void Stock::detach(Observer* obs)
{
    // simple removal (not optimized)
    for (auto it = observers.begin(); it != observers.end(); ++it)
    {
        if (*it == obs)
        {
            observers.erase(it);
            break;
        }
    }
}

// ===== Notify =====
void Stock::notify()
{
    for (auto obs : observers)
    {
        obs->update(price);
    }
}

// ===== State Change =====
void Stock::setPrice(int price)
{
    this->price = price;
    notify();  // 
}