#include <iostream>
#include <string>
#include <Wheater.hpp>
#include <Sensor.hpp>
#include <DataCenter.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Wheater *s1 = Sensor::create("Humedad");
    Wheater *s2 = Sensor::create("Temperatura");

    DataCenter *data = new DataCenter(s1, s2);
    data->setMaxHumidity(52);
    data->setMaxTemp(23);
    cout << "Show data" << data->showData() <<endl;
    data->showData();
    data->showData();
    data->showData();
    data->showData();
    data->showData();
    cout << "Show data" << data->showData() <<endl;

    system("pause");
    return 0;
}
