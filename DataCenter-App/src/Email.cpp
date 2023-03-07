#include <Email.hpp>

Email::Email(){}

bool Email::send(string sender, string subject, string bodyMail, string recipient) 
{
    cout << "Enviando email..." << endl;
    cout << " Remitente: " << sender << endl;
    cout << " Receptor: " << recipient << endl;
    cout << " Asunto: " << subject << endl;
    cout << " Cuerpo del mensaje: " << bodyMail << endl;
    return true;
}

Email::~Email(){}