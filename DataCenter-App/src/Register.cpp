#include <Register.hpp>

Register::Register(){}

bool Register::write(string systemModule, string message, string filePath)
{
    bool logState = false;
    cout << "Escribiendo datos..." << endl;
    cout << " Registro del sistema: " << systemModule << endl;
    cout << " Mensaje: " << message << endl;
    cout << " Archivo: " << filePath << endl;

    ofstream logFile;
    logFile.open(filePath, ofstream::app);
    logFile << getCurrentDatetime() + " - " +  systemModule + " - " +  message << endl;
    logFile.close();
    
    if(logFile.good()){logState = true;};
    return logState;
}

string Register::getCurrentDatetime() 
{
    auto start = chrono::system_clock::now();
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end-start;
    time_t end_time = chrono::system_clock::to_time_t(end);

    return ctime(&end_time);
}

Register::~Register(){}