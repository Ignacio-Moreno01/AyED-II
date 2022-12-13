#include "../include/Client.hpp"

Client::Client(){}

void Client::setNameClient(string _nameClient)
{
    nameClient = _nameClient;
}

void Client::setSurnameClient(string _surnameClient)
{
    surnameClient = _surnameClient;
}

void Client::setDniClient(int _dniClient)
{
    _dniClient = dniClient;
}

void Client::setMailClient(string _mailClient)
{
    _mailClient = mailClient;
}

string Client::getNameClient()
{
    return nameClient;
}

string Client::getSurnameClient()
{
    return surnameClient;
}

int Client::getDniClient()
{
    return dniClient;
}

string Client::getMailClient()
{
    return mailClient;
}

Client::~Client(){}
