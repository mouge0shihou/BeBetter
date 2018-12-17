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

    IBike *createBike()
    {
        return new BenzBike();
    }
};

class BmwFactory : public Factory
{
public:
    ICar *createCar()
    {
        return new BmwCar();
    }

    IBike *createBike()
    {
        return new BmwBike();
    }
};

class AudiFactory : public Factory
{
public:
    ICar *createCar()
    {
        return new AudiCar();
    }

    IBike *createBike()
    {
        return new AudiBike();
    }
};
#endif // CREATEFACTORY_H
