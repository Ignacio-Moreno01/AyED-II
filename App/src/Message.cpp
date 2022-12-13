#include <Message.hpp>

Message::Message() {}
Message::~Message() {}

Instagram::Instagram() {}
Instagram::~Instagram() {}

Facebook::Facebook() {}
Facebook::~Facebook() {}

Whatsapp::Whatsapp() {}
Whatsapp::~Whatsapp() {}

void Message::send(string _text)
{
    _text = text;
}

string Message::getNotify()
{
    return text;
}

void Instagram::send(string _text)
{
    _text = text;
    // cout << "Sending message..." << endl;
    // cout << "Instagram Sender: " << sender << endl;
    // cout << "Instagram Recipient: " << recipient << endl;
    // cout << "Instagram Subject: " << subject << endl;
    // cout << "Instagram Body: " << bodyMessage << endl;
    // return true;
}

string Instagram::getNotify()
{
    return text;
}

void Facebook::send(string _text)
{
    _text = text;
    // cout << "Sending message..." << endl;
    // cout << "Facebook Sender: " << sender << endl;
    // cout << "Facebook Recipient: " << recipient << endl;
    // cout << "Facebook Subject: " << subject << endl;
    // cout << "Facebook Body: " << bodyMessage << endl;
    // return true;
}

string Facebook::getNotify()
{
    return text;
}

void Whatsapp::send(string _text)
{
    _text = text;
    // cout << "Sending message..." << endl;
    // cout << "Whatsapp Sender: " << sender << endl;
    // cout << "Whatsapp Recipient: " << recipient << endl;
    // cout << "Whatsapp Subject: " << subject << endl;
    // cout << "Whatsapp Body: " << bodyMessage << endl;
    // return true;
}

string Whatsapp::getNotify()
{
    return text;
}
