#include <iostream>
#include "createfactory.h"
#include "createproduct.h"

using namespace std;

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p) = NULL;}}
#endif

int main(int argc, char *argv[])
{
    Factory *pfactory = new BenzFactory();
    ICar *pCar = pfactory->createCar();
    cout << "benz " << pCar->Name() << endl;
    SAFE_DELETE(pCar);
    SAFE_DELETE(pfactory);


    pfactory = new BmwFactory();
    pCar = pfactory->createCar();
    cout << "bmw " << pCar->Name() << endl;
    SAFE_DELETE(pCar);
    SAFE_DELETE(pfactory);


    pfactory = new AudiFactory();
    pCar = pfactory->createCar();
    cout << "audi " << pCar->Name() << endl;
    SAFE_DELETE(pCar);
    SAFE_DELETE(pfactory);

    system("pause");
    return 0;
}
