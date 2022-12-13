#ifndef CUBICLE_HPP
#define CUBICLE_HPP
#include <iostream>
using namespace std;

class Cubicle
{
    private:
        float priceCubicle;

    public:
        Cubicle();
        ~Cubicle();
        void setPriceCubicle(float _priceCubicle);
        float getPriceCubicle();
};

#endif