#include "Transport.hpp"
#include <iostream>

// ===== Truck Implementation =====

Truck::Truck()
{
    name = "Truck";
}

void Truck::deliver()
{
    std::cout << "The orders are delivered by Truck." << std::endl;
}

// ===== Ship Implementation =====

Ship::Ship()
{
    name = "Ship";
}

void Ship::deliver()
{
    std::cout << "The orders are delivered by Ship." << std::endl;
}