#ifndef MESSAGE_HPP
#define MESSAGE_HPP
#include <iostream>
using namespace std;

class Message
{
    private:
        string text;
    public:
        Message();
        ~Message();
        void send(string _text);
        string getNotify();
};

#endif