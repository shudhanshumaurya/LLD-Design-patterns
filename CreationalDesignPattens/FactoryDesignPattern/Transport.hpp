#ifndef TRANSPORT_HPP
#define TRANSPORT_HPP

#include <string>

class Transport
{
protected:
    std::string name;

public:
    virtual void deliver() = 0;
    virtual ~Transport() {}
};

// Truck
class Truck : public Transport
{
public:
    Truck();
    void deliver() override;
};

// Ship
class Ship : public Transport
{
public:
    Ship();
    void deliver() override;
};

#endif