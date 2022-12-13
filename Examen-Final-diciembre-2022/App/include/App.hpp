#ifndef APP_HPP
#define APP_HPP
#include <iostream>
#include <Rent.hpp>
#include <Message.hpp>
using namespace std;

class App
{
    private:
        Message *message;
        Rent *rent;

    public:
        App();
        ~App();
        void add();
        void remove();
        void listRent(Rent *rent);
};

#endif