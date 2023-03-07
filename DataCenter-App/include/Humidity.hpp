#ifndef HUMIDITY_H
#define HUMIDITY_H
#include <Wheater.hpp>

class Humidity : public Wheater
{
    private:
        float m_value;
        void setValue(float value);

    public:
        Humidity();
        ~Humidity();
        float getValue();
};

#endif