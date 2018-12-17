#ifndef FACTORY_H
#define FACTORY_H

#include "createproduct.h"

class Factory
{
public:
    enum CAR_TYPE{
        BENZCAR,
        BMWCAR,
        AUDICAR
    };
    ICar* createCar(CAR_TYPE type)
    {
        ICar *pcar = NULL;
        switch (type)
        {
        case BENZCAR:
            pcar = new BenzCar();
            break;
        case BMWCAR:
            pcar = new BmwCar();
            break;
        case AUDICAR:
            pcar = new AudiCar();
            break;
        default:
            break;
        }
        return pcar;
    }
};

#endif // FACTORY_H
