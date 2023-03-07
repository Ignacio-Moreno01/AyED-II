#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <Wheater.hpp>

class Temperature : public Wheater
{
    private:
        float m_value;
        void setValue(float value);

    public:
        Temperature();
        ~Temperature();
        float getValue();
};

#endif