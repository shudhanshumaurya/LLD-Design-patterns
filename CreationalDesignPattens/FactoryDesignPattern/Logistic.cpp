#include "Logistics.hpp"

// ===== Factory Logic =====
void Logistics::planDelivery()
{
    Transport* t = createTransport();
    t->deliver();
    delete t;
}

// ===== RoadLogistics =====
Transport* RoadLogistics::createTransport()
{
    return new Truck();
}

// ===== SeaLogistics =====
Transport* SeaLogistics::createTransport()
{
    return new Ship();
}