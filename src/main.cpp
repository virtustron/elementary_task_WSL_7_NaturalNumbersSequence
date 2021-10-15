#include <iostream>
#include <stdexcept>
#include "NaturalSequenceConsoleUI.hpp"

int main(int argc, char *argv[])
{
	NaturalSequenceConsoleUI console_ui;
	
	try
	{
		console_ui.MakeDialog(argc, argv);
	}
	catch(const std::invalid_argument& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return 0;
}