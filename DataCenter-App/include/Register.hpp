#ifndef REGISTER_H
#define REGISTER_H
#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>    
using namespace std;

class Register
{
    private:
        string getCurrentDatetime();

    public:
        Register();
        ~Register();
        bool write(string systemModule, string message, string filePath = "register.txt");
};

#endif