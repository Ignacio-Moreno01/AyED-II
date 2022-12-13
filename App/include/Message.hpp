#ifndef MESSAGE_HPP
#define MESSAGE_HPP
#include <iostream>
using namespace std;

class Message : public App
{
    private:
        string text;
    public:
        Message();
        ~Message();
        void send(string _text);
        string getNotify();
};

class Instagram : public Message
{
    private:
        string text;

    public:
        Instagram();
        ~Instagram();
        void send(string _text);
        string getNotify();
};

class Facebook : public Message
{
    private:
        string text;

    public:
        Facebook();
        ~Facebook();
        void send(string _text);
        string getNotify();
};

class Whatsapp : public Message
{
    private:
        string text;

    public:
        Whatsapp();
        ~Whatsapp();
        void send(string _text);
        string getNotify();
};

#endif