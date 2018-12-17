#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class ICar
{
public:
    virtual string Name() = 0;
};

class IBike
{
public:
    virtual string Name() = 0;
};
#endif // PRODUCT_H
