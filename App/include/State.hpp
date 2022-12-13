#ifndef STATE_HPP
#define STATE_HPP
#include <iostream>
using namespace std;

class State
{
    private:
        int reserved;
        int free;
    public:
        State();
        ~State();
        void setReserved(int _reserved);
        int getReserved();
        void setFree(int _free);
        int getFree();
};

#endif