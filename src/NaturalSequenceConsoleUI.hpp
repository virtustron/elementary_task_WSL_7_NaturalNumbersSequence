#pragma once

#include <iostream>
#include <iterator>
#include "NaturalSequence.hpp"

class NaturalSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
	void ShowInstructions();
    void WriteSequence();

private:
	unsigned int m_upper_bound;
}; 