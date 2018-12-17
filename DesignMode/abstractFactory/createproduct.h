#ifndef CREATEPRODUCT_H
#define CREATEPRODUCT_H
#include "product.h"

class BenzCar : public ICar
{
public:
    string Name()
    {
        return "Benz Car";
    }
};

class BmwCar : public ICar
{
public:
    string Name()
    {
        return "Bmw Car";
    }
};

class AudiCar : public ICar
{
public:
    string Name()
    {
        return "Audi Car";
    }
};

class BenzBike : public IBike
{
public:
    string Name()
    {
        return "BenzBike";
    }
};

class BmwBike : public IBike
{
public:
    string Name()
    {
        return "BmwBike";
    }
};

class AudiBike : public IBike
{
public:
    string Name()
    {
        return "AudiBike";
    }
};
#endif // CREATEPRODUCT_H
