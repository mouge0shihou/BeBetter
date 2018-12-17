#ifndef FACTORY_H
#define FACTORY_H

#include "createproduct.h"

class Factory
{
public:
    virtual ICar *createCar() = 0;
};

#endif // FACTORY_H
