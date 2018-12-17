#include <iostream>
//#include "createproduct.h"
#include "factory.h"
using namespace std;

int main(int argc, char *argv[])
{
    Factory *pfactory = new Factory();
    ICar *pcar1 = pfactory->createCar(Factory::BENZCAR);
    cout << pcar1->Name() << endl;
    ICar *pcar2 = pfactory->createCar(Factory::BMWCAR);
    cout << pcar2->Name() << endl;
    ICar *pcar3 = pfactory->createCar(Factory::AUDICAR);
    cout << pcar3->Name() << endl;
    system("pause");
    return 0;
}
