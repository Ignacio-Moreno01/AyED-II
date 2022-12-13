#include <iostream>
#include <App.hpp>
using namespace std;

int main()
{
    int option;
    App *aplication = new App();
    do
    {
        cout << "\nBienvenido a la aplicacion de Cubículos Químicos Tecnológicos" << endl;
        cout << endl;
        cout << "Que accion desea ejecutar?" << endl;
        cout << "Digite el numero segun que desee hacer" << endl;
        cout << endl;
        cout << "1. Cargar cliente" << endl;
        cout << "2. Agregar cubiculo" << endl;
        cout << "3. Ver estado de los cubiculos de la empresa" << endl;
        cout << "4. Cargar alquiler" << endl;
        cout << "5. Ver lista de alquileres" << endl;
        cout << "6. Enviar mensaje" << endl;
        cout << "0. Salir de la aplicacion" << endl;
        cout << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            Client *client = new Client();
            client->setNameClient("Ignacio");
            client->setSurnameClient("Moreno");
            delete client;
            break;
        case 2:
            cout << "Ingrese la cantidad de cubiculos a rentar: " << endl;
            Cubicle *cubicle[1];
            cubicle[0] = new Cubicle();
            cubicle[1] = new Cubicle();

            cubicle[0]->setPriceCubicle(200);
            cubicle[1]->setPriceCubicle(500);
            for (int i = 0; i < 3; i++)
            {
                delete cubicle[i];
            }
            break;
        case 3:
            State* state = new State;
            state->setReserved(8);
            state->setFree(3);
            cout << "Hay " << state->getFree() << " cubiculos libres." << endl;
            cout << "Hay " << state->getReserved() << " cubiculos en uso." << endl;
            delete state;
            break;
        case 4:
            cout << "Cargue el alquiler por cliente: " << endl;
            Rent *rent[2];
            
            rent[0] = new Rent(client, cubicle[0], state);
            rent[1] = new Rent(client, cubicle[1], state);
            for (int i = 0; i < 3; i++)
            {
                delete rent[i];
            }
            break;
        case 5:
            cout << "Ver la lista de alquileres por cliente: " << endl;
            for (int i = 0; i < 3; i++)
            {
                aplication->listRent(rent[i]);
                // cout << "Rent: " << rent[i] << endl;
            }
            break;
        case 6:
            cout << "Envie el mensaje al cliente cargado: " << endl;
            Message* message = new Message;
            message->send("Mensaje: su unidad de cubiculo alquilada ha llegado a la fabrica...");
            delete message;
            break;
        case 0:
            cout << "\nHa salido de la aplicacion..." << endl;
            break;
        }
    } while (option != 0);
    
    delete aplication;
    cin.get();
    return 0;
}