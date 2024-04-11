all: compile link run
	
compile:	
	g++ -IInclude/SFML/include -IInclude/imgui-sfml -c main.cpp

link:
	g++ main.o -o main -LInclude/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system

run:
	./main

clean:
	del *.o *.exe