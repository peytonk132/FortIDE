output: main.o 
	g++ main.o -o main -IC:/Users/Peyton/source/repos/FortIDE/Include/imgui-master

main.o: 
	g++ -c main.cpp



run:
	./main

clean:
	del *.o *.exe