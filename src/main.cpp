#include <iostream>
#include "NaturalSequenceConsoleUI.hpp"

int main(int argc, char *argv[])
{
	NaturalSequenceConsoleUI console_ui;
	console_ui.RequestData(argc, argv);
    //console_ui.ShowInstructions();

	return 0;
}