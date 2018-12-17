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
#endif // CREATEPRODUCT_H
