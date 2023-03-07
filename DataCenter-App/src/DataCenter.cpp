#include <DataCenter.hpp>

DataCenter::DataCenter(Wheater* humiditySensor, Wheater* tempSensor)
{
    m_sensor1 = humiditySensor;
    m_sensor2 = tempSensor;
    setMaxHumidity(3.1);
    setMaxTemp(3.1);

    m_mailSender = new Email();
    m_logWriter = new Register();
}

string DataCenter::showData() 
{
    float currentHumidity = m_sensor1->getValue();
    float currentTemp = m_sensor2->getValue();

    if(currentHumidity == m_maxHumidity)
    {
        cout << "Maxima humedad alcanzada: " << currentHumidity << endl; 
        m_mailSender->send("DataCenter", "Alerta de humedad", "Maxima humedad alcanzada!");
        m_logWriter->write("Registro de humedad", "Maxima humedad alcanzada");
    } 

    if(currentTemp == m_maxTemp)
    {
        cout << "Maxima temperatura alcanzada: " << currentTemp << endl;
        m_mailSender->send("DataCenter", "Alerta de temperatura", "Maxima temperatura alcanzada!");
        m_logWriter->write("Registro de temperatura", "Maxima temperatura alcanzada");
    } 

    return "Humedad: " + to_string(currentHumidity) + " - Temperatura: " + to_string(currentTemp); 
}

void DataCenter::setMaxTemp(float maxTemp) 
{
    m_maxTemp = maxTemp;
}

void DataCenter::setMaxHumidity(float maxHumidity) 
{
    m_maxHumidity = maxHumidity;
}

DataCenter::~DataCenter()
{
    delete m_mailSender;
    delete m_logWriter;
}