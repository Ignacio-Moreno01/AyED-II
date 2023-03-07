#ifndef DATACENTER_H
#define DATACENTER_H
#include <Wheater.hpp>
#include <Email.hpp>
#include <Register.hpp>
#include <string>

class DataCenter
{
    private:
        Wheater *m_sensor1;
        Wheater *m_sensor2;
        float m_maxTemp;
        float m_maxHumidity;
        Email *m_mailSender;
        Register *m_logWriter;

    public:
        DataCenter(Wheater *, Wheater *);
        ~DataCenter();
        string showData();
        void setMaxTemp(float);
        void setMaxHumidity(float);
};

#endif