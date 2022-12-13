#include <Message.hpp>

Message::Message() {}

Message::~Message() {}

void Message::send(string _text)
{
    _text = text;
    // cout << "Sending message..." << endl;
    // cout << "Whatsapp Sender: " << sender << endl;
    // cout << "Whatsapp Recipient: " << recipient << endl;
    // cout << "Whatsapp Subject: " << subject << endl;
    // cout << "Whatsapp Body: " << bodyMessage << endl;
    // return true;
}

string Message::getNotify()
{
    return text;
}