#include <iostream>
#include "createfactory.h"
#include "createproduct.h"

using namespace std;

int main(int argc, char *argv[])
{
    Factory *pFactory = Factory::createFactory(Factory::BENZ_FACTORY);
    ICar *pCar = pFactory->createCar();
    IBike *pBike = pFactory->createBike();

    cout << "benz factory car"  << pCar->Name()  << endl;
    cout << "benz factory bike" << pBike->Name() << endl;
    if(pCar)
    {
        delete pCar;
        pCar = NULL;
    }
    if(pBike)
    {
        delete pBike;
        pBike = NULL;
    }
    if(pFactory)
    {
        delete pFactory;
        pFactory = NULL;
    }

    pFactory = Factory::createFactory(Factory::BMW_FACTORY);
    pCar = pFactory->createCar();
    pBike = pFactory->createBike();

    cout << "bmw factory car"  << pCar->Name()  << endl;
    cout << "bmw factory bike" << pBike->Name() << endl;
    if(pCar)
    {
        delete pCar;
        pCar = NULL;
    }
    if(pBike)
    {
        delete pBike;
        pBike = NULL;
    }
    if(pFactory)
    {
        delete pFactory;
        pFactory = NULL;
    }

    pFactory = Factory::createFactory(Factory::AUDI_FACTORY);
    pCar = pFactory->createCar();
    pBike = pFactory->createBike();

    cout << "Audi factory car"  << pCar->Name()  << endl;
    cout << "Audi factory bike" << pBike->Name() << endl;
    if(pCar)
    {
        delete pCar;
        pCar = NULL;
    }
    if(pBike)
    {
        delete pBike;
        pBike = NULL;
    }
    if(pFactory)
    {
        delete pFactory;
        pFactory = NULL;
    }

    system("pause");
    return 0;
}
