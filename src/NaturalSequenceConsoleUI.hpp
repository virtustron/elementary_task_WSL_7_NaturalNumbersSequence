#pragma once

#include <iostream>
#include "NaturalSequenceIterator.hpp"

using namespace std;

class NaturalSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
	void ShowInstructions();
    void WriteSequence();

private:
	unsigned int m_upper_bound;
    NaturalSequenceIterator m_iterator;


};