#ifndef LOGISTICS_HPP
#define LOGISTICS_HPP

#include "Transport.hpp"

// ===== Creator =====
class Logistics
{
public:
    void planDelivery();
    virtual ~Logistics() {}

protected:
    virtual Transport* createTransport() = 0;
};

// ===== Concrete Creators =====
class RoadLogistics : public Logistics
{
protected:
    Transport* createTransport() override;
};

class SeaLogistics : public Logistics
{
protected:
    Transport* createTransport() override;
};

#endif