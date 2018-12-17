#include "factory.h"
#include "createfactory.h"

Factory* Factory::createFactory(FACTORY_TYPE type)
{
    Factory *pfactory = NULL;
    switch (type) {
    case BENZ_FACTORY:
        pfactory = new BenzFactory();
        break;
    case BMW_FACTORY:
        pfactory = new BmwFactory();
        break;
    case AUDI_FACTORY:
        pfactory = new AudiFactory();
        break;
    default:
        break;
    }
    return pfactory;
}
