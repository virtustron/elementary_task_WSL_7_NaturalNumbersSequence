src = ./src/
bin = ./bin/

all: main
		
main: build_all
	g++ -o $(bin)main $(bin)main.o $(bin)NaturalSequenceConsoleUI.o 

build_all:
	g++ -o $(bin)NaturalSequenceConsoleUI.o -c $(src)NaturalSequenceConsoleUI.cpp
	g++ -o $(bin)main.o -c $(src)main.cpp

ui:
	g++ -o $(bin)NaturalSequenceConsoleUI.o -c $(src)NaturalSequenceConsoleUI.cpp









