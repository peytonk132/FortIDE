CXX = g++
CXXFLAGS = -g -Wextra -Wall
INCLUDE = -Isrc/include -Isrc/imgui-include 
LIB = -Lsrc/lib -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-system -lsfml-window -lopengl32

all: compile link run clean

compile:
	$(CXX) $(CXXFLAGS) -c main.cpp $(INCLUDE)

link:
	$(CXX) $(CXXFLAGS) main.o -o main $(LIB)



.PHONY: run
run:
	./main

.PHONY: clean
clean:
	del *.o *.exe