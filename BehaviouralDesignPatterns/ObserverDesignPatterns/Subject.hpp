#pragma once
#include <vector>
#include "Observer.hpp"

// ===== Subject Interface =====
class Subject
{
public:
    virtual void attach(Observer* obs) = 0;
    virtual void detach(Observer* obs) = 0;
    virtual void notify() = 0;
    virtual ~Subject() {}
};

// ===== Concrete Subject =====

class Stock : public Subject
{
private:
    std::vector<Observer*> observers;
    int price;

public:
    void attach(Observer* obs) override;
    void detach(Observer* obs) override;
    void notify() override;

    void setPrice(int price);
};