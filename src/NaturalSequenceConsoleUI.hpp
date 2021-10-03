#pragma once

#include <iostream>

using namespace std;

class NaturalSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
	void ShowInstructions();
    void WriteSequence();

private:
	unsigned int m_upper_bound;
};