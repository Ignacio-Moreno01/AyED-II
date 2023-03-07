#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
#include <string>
#include <Wheater.hpp>
#include <Humidity.hpp>
#include <Temperature.hpp>
using namespace std;

#pragma once

class Sensor
{
    public:
        Sensor();
        ~Sensor();
        static Wheater* create(string id);
};

#endif