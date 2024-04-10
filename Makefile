all: compile link
	
compile:	
	g++ -IInclude/SFML/include -c main.cpp

link:
	g++ main.o -o main -LInclude/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system

clean:
	del *.o