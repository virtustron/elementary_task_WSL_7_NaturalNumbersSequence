#pragma once

#include <iostream>
#include <iterator>
#include <stdexcept>
#include <limits>
#include "NaturalSequence.hpp"

const int COMPLETE_SEQUENCE_PARAMETERS_COUNT = 2;   // 2 =  1 program name + 1 upper bound
const double ATOI_NO_CONVERSION_CAN_BE_PERFORMED = 0;

class NaturalSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
    

private:
	unsigned int m_upper_bound;

	void WriteSequence(const unsigned int upper_bound);
	void ShowProgramInstructions();
}; 