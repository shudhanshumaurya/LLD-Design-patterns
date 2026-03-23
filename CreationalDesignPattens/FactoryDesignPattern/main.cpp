#include "Logistics.hpp"

int main()
{
    Logistics* logistics;

    logistics = new RoadLogistics();
    logistics->planDelivery();
    delete logistics;

    logistics = new SeaLogistics();
    logistics->planDelivery();
    delete logistics;

    return 0;
}