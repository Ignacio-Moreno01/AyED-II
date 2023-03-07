#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include <Temperature.hpp>
#include <Humidity.hpp>
#include <iostream>
using namespace std;

//Prueba si el sensor de temperatura obtiene un valor
TEST(Temperature, getValue)
{
    //Arrange
    float value = 23.6;
    Temperature temp;

    //Act
    temp.setValue(value);

    //Assert
    ASSERT_TRUE(temp.getValue() == 23.6);
}

//Prueba si el sensor de humedad obtiene un valor
TEST(Humidity, getValue)
{
    //Arrange
    float value = 80;
    Humidity hum;

    //Act
    hum.setValue(value);

    //Assert
    ASSERT_TRUE(hum.getValue() == 80);
}