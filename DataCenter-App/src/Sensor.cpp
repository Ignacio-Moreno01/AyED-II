#include <Sensor.hpp>

Sensor::Sensor(){}

Wheater* Sensor::create(string id) 
{
    Wheater* instance;
    if(id == "Humedad") instance = new Humidity();
    if(id == "Temperatura") instance = new Temperature();

    return instance;
}

Sensor::~Sensor(){}