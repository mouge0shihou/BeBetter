#ifndef CREATEFACTORY_H
#define CREATEFACTORY_H

#include "factory.h"

class BenzFactory : public Factory
{
public:
    ICar *createCar()
    {
        return new BenzCar();
    }
};

class BmwFactory : public Factory
{
public:
    ICar *createCar()
    {
        return new BmwCar();
    }
};

class AudiFactory : public Factory
{
public:
    ICar *createCar()
    {
        return new AudiCar();
    }
};
#endif // CREATEFACTORY_H
