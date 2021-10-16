src = ./src/
bin = ./bin/

all: main
		
main: build_all
	g++ -g -o $(bin)main 	$(bin)main.o \
							$(bin)NaturalSequenceConsoleUI.o \
							$(bin)NaturalSequence.o \
							$(bin)NaturalSequenceIterator.o \
							$(bin)NaturalSequenceGeneratedContainer.o \
							$(bin)NaturalSequenceParametersContainer.o \
							$(bin)NaturalSequenceGenerating.o



build_all:
	g++ -g -o $(bin)NaturalSequenceGeneratedContainer.o -c $(src)NaturalSequenceGeneratedContainer.cpp
	g++ -g -o $(bin)NaturalSequenceParametersContainer.o -c $(src)NaturalSequenceParametersContainer.cpp
	g++ -g -o $(bin)NaturalSequenceGenerating.o -c $(src)NaturalSequenceGenerating.cpp
	
	g++ -g -o $(bin)NaturalSequenceIterator.o -c $(src)NaturalSequenceIterator.cpp
	g++ -g -o $(bin)NaturalSequence.o -c $(src)NaturalSequence.cpp
	g++ -g -o $(bin)NaturalSequenceConsoleUI.o -c $(src)NaturalSequenceConsoleUI.cpp
	g++ -g -o $(bin)main.o -c $(src)main.cpp

ui:
	g++ -g -o $(bin)NaturalSequenceConsoleUI.o -c $(src)NaturalSequenceConsoleUI.cpp










