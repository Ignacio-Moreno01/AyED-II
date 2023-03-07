#ifndef EMAIL_H
#define EMAIL_H
#include <iostream>
#include <string>
using namespace std; 

class Email
{
    public:
        Email();
        ~Email();
        bool send(string sender, string subject, string bodyMail, string recipient = "supportdatacenter@gmail.com");
};

#endif