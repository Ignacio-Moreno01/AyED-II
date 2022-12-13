:: Compilo código objeto
g++ -Wall -std=c++11 -c .\src/App.cpp -o App.o -I.\include
g++ -Wall -std=c++11 -c .\src/Rent.cpp -o Rent.o -I.\include
g++ -Wall -std=c++11 -c .\src/Message.cpp -o Message.o -I.\include
g++ -Wall -std=c++11 -c .\src/State.cpp -o State.o -I.\include
g++ -Wall -std=c++11 -c .\src/Cubicle.cpp -o Cubicle.o -I.\include
g++ -Wall -std=c++11 -c .\src/Client.cpp -o Client.o -I.\include
g++ -Wall -std=c++11 -c main.cpp -o main.o -I.\include

:: Compilo el Binario
g++ -Wall -std=c++11 Message.o Client.o App.o Rent.o State.o Cubicle.o main.o -o .\app.exe -I.\include 

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
app.exe