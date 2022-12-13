#include "../include/Rent.hpp"

Rent::Rent(Client *_client, Cubicle* _cubicle, State* _state) : client(_client), cubicle(_cubicle), state(_state){}

Rent::Rent() {}

string Rent::getNameClient()
{
    return client->getNameClient();
}

string Rent::getSurnameClient()
{
    return client->getSurnameClient();
}

float Rent::getPriceCubicle()
{
    return cubicle->getPriceCubicle();
}

int Rent::getStateCubicle()
{
    return state->getFree();
}

Rent::~Rent(){}