#include "NaturalSequenceConsoleUI.hpp"

void NaturalSequenceConsoleUI::MakeDialog(int argc, char* argv[])
{
    unsigned int upper_bound;
    
    if (COMPLETE_SEQUENCE_PARAMETERS_COUNT == argc)
	{
        upper_bound = atoi(argv[1]);
	    if (upper_bound == ATOI_NO_CONVERSION_CAN_BE_PERFORMED)
	    {
		    throw std::invalid_argument("Conversion of current upper bound value can't be performed.");
	    }
    }
    else
    {
        ShowProgramInstructions();

        std::cout << "Enter upper bound value:\n";
    	std::cin >> upper_bound;
	
	    if (!std::cin)				
	    {
		    std::cin.clear();		
		    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

		    throw std::invalid_argument("Non numerical upper bound value.");
	    }


    }
    
    WriteSequence(upper_bound);
}


void NaturalSequenceConsoleUI::WriteSequence(const unsigned int upper_bound)
{
    auto natural_sequence = NaturalSequence(0, upper_bound);
    
    for (auto it = natural_sequence.begin(), end = natural_sequence.end(); it < end; ++it)
    {
        const auto i = *it;
        std::cout << i << ' ';
    }

    std::cout << '\n';       
    
}

void NaturalSequenceConsoleUI::ShowProgramInstructions()
{
	std::cout << "\n";
	std::cout << "=== Natural Sequence Generator console application user manual ===\n";
	std::cout << "Enter one integer numbers - upper bound of the sequence.\n";
    std::cout << "Each element of which will be less than square of the bound.\n";
	std::cout << "\n";
}
