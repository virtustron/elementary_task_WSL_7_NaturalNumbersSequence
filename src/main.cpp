#include <iostream>
#include <stdexcept>
#include <vector>
#include "NaturalSequenceConsoleUI.hpp"
#include "NaturalSequenceGenerating.hpp"
#include "NaturalSequenceGeneratedContainer.hpp"

int main(int argc, char *argv[])
{
	// Only for test - Should be exported to Rust
	void* parameters_container = NULL;
	
	if (InitializeNaturalSequenceParameters(&parameters_container) == INIT_SUCCEDED)
	{
		int generating_result = -1;
		void *generated_sequence_container = NULL;

		generating_result = GenerateNaturalSequence(parameters_container, &generated_sequence_container);

		switch (generating_result)
		{
		case GENERATING_SUCCEDED:
		{
			std::cout << "Generating succeded." << "\n";

			NaturalSequenceGeneratedContainer* sequence_container;
			sequence_container = (NaturalSequenceGeneratedContainer*)generated_sequence_container;

			int elements_count = sequence_container->get_elements_count();
			unsigned int* elements_array = sequence_container->get_elements();	

			//std::vector <unsigned int> sequence(elements_array, elements_array + elements_count);
			std::vector <unsigned int> sequence;
			sequence.resize(elements_count);
			

			for (int i = 0; i < sequence.size(); i++)
			{
				std::cout << sequence[i] << ", ";
			}

			std::cout << "\n";

			break;
		}

		case GENERATING_PARAMETERS_ARE_NOT_VALID:
		{
			std::cout << "Generating parameters are not valid" << "\n";
			break;
		}

		case GENERATING_FAILED:
		{
			std::cout << "Generating failed." << "\n";
			break;
		}

		default:
		{
			std::cout << "Unexpected error." << "\n";
			break;
		}
		}
	}
	
	/*
	NaturalSequenceConsoleUI console_ui;
	
	try
	{
		console_ui.MakeDialog(argc, argv);
	}
	catch(const std::invalid_argument& e)
	{
		std::cout << e.what() << '\n';
	}
	*/
	
	return 0;
}