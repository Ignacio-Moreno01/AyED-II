#include "../include/App.hpp"

App::App() 
{
    message = new Message();
}

void App::listRent(Rent* rent)
{
    cout << "Nombre del cliente: " << rent->getNameClient() << endl;
    cout << "Apellido del cliente: " << rent->getSurnameClient() << endl;
    cout << endl;
    cout << "Precio del cubiculo: " << rent->getPriceCubicle() << endl;
}

App::~App(){}