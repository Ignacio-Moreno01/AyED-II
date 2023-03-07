#ifndef WHEATER_H
#define WHEATER_H
#include <iostream>
using namespace std;

class Wheater
{
    public:
        virtual ~Wheater(){}
        virtual float getValue() = 0;
};

#endif