#ifndef CLIENT_HPP
#define CLIENT_HPP
#include <iostream>
using namespace std;

class Client
{
    private:
        string nameClient;
        string surnameClient;
        int dniClient;
        string mailClient;
    public:
        void setNameClient(string _nameClient);
        void setSurnameClient(string _surnameClient);
        void setDniClient(int _dniClient);
        void setMailClient(string _mailClient);

        string getNameClient();
        string getSurnameClient();
        int getDniClient();
        string getMailClient();
};

#endif