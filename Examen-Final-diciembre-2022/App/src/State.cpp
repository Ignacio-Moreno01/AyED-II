#include "../include/State.hpp"

State::State(){}
State::~State(){}

void State::setReserved(int _reserved)
{
    _reserved = reserved;
}

int State::getReserved()
{
    return reserved;
}

void State::setFree(int _free)
{
    _free = free;
}

int State::getFree()
{
    return free;
}