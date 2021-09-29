#pragma once

#include <iostream>

using namespace std;

class NaturalSequenceConsoleUI
{
public:
	void RequestData(int argc, char* argv[]);
	void ShowInstructions();

private:
	unsigned int m_upper_bound;

};