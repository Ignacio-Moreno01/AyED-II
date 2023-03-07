#include <Humidity.hpp>

Humidity::Humidity(){}

void Humidity::setValue(float value)
{
    m_value++;
}

float Humidity::getValue() 
{
    setValue(1.1);
    return m_value;
}

Humidity::~Humidity(){}