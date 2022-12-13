#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include "../include/Rent.hpp"
#include <iostream>
using namespace std;

// Prueba el precio del cubiculo
TEST(Cubicle, priceCubicle)
{
    // Arrange
    float priceCubicle = 2300;
    Cubicle cubicle;

    // Act
    cubicle.setPriceCubicle(priceCubicle);

    // Assert
    ASSERT_TRUE(cubicle.getPriceCubicle() == 2300);
}

// Prueba si el nombre del cliente está cargado en el sistema
TEST(Client, nameClient)
{
    // Arrange
    string nameClient = "Ignacio";
    Client client;

    // Act
    client.setNameClient(nameClient);

    // Assert
    ASSERT_TRUE(client.getNameClient() == "Ignacio");
}

// Prueba si el apellido del cliente está cargado en el sistema
TEST(Client, surnameClient)
{
    // Arrange
    string surnameClient = "Martinez";
    Client client;

    // Act
    client.setSurnameClient(surnameClient);

    // Assert
    ASSERT_TRUE(client.getSurnameClient() == "Martinez");
}