#include <Temperature.hpp>

Temperature::Temperature(){}

float Temperature::getValue() 
{
    setValue(1.1);
    return m_value;
}

void Temperature::setValue(float value) 
{
    m_value++;
}

Temperature::~Temperature(){}