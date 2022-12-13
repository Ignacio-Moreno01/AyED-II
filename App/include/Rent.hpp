#ifndef RENT_HPP
#define RENT_HPP
#include <iostream>
#include <Client.hpp>
#include <Cubicle.hpp>
#include <State.hpp>
using namespace std;

class Rent : public App
{
    private:
        Client *client;
        Cubicle *cubicle;
        State* state;

    public:
        Rent(Client* _client, Cubicle* _cubicle, State* _state);
        Rent();
        ~Rent();
        void add();
        void remove();
        void list();

        string getListRent();
        string getNameClient();
        string getSurnameClient();
        float getPriceCubicle();
        int getStateCubicle();
};

#endif