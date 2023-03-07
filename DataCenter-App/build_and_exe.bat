:: Compilo código objeto
g++ -Wall -std=c++11 -c .\src/Humidity.cpp -o Humidity.o -I.\include
g++ -Wall -std=c++11 -c .\src/Temperature.cpp -o Temperature.o -I.\include
g++ -Wall -std=c++11 -c .\src/Sensor.cpp -o Sensor.o -I.\include
g++ -Wall -std=c++11 -c .\src/Email.cpp -o Email.o -I.\include
g++ -Wall -std=c++11 -c .\src/Register.cpp -o Register.o -I.\include
g++ -Wall -std=c++11 -c .\src/DataCenter.cpp -o DataCenter.o -I.\include
g++ -Wall -std=c++11 -c main.cpp -o main.o -I.\include

:: Compilo el Binario
g++ -Wall -std=c++11 Sensor.o DataCenter.o Humidity.o Temperature.o Email.o Register.o main.o -o .\App.exe -I.\include 

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
App.exe