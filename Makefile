output: main.o 
	g++ main.o -o main $(run) $(clean)

main.o: 
	g++ -c main.cpp

run:
	./main

clean:
	del *.o *.exe