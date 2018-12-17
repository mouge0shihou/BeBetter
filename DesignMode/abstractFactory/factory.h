#ifndef FACTORY_H
#define FACTORY_H

#include "createproduct.h"

class Factory
{
public:
    enum FACTORY_TYPE{
        BENZ_FACTORY,
        BMW_FACTORY,
        AUDI_FACTORY
    };
    virtual ICar *createCar() = 0;
    virtual IBike *createBike() = 0;
    static Factory *createFactory(FACTORY_TYPE type);
};

#endif // FACTORY_H
