#include "NaturalSequenceConsoleUI.hpp"

#include <iterator>
#include "NaturalSequence.hpp"


void NaturalSequenceConsoleUI::MakeDialog(int argc, char* argv[])
{
    // TODO: request data from user
    // ...
    // for example Upper Bound is 10
    m_upper_bound = 10;


    // TODO: validate "m_upper_bound" in separate class _Application_ {create validators, parsers, UI}
    // temporary validation:
    if (m_upper_bound > 0 || m_upper_bound < 1000)
    {
        WriteSequence();
    }
}


void NaturalSequenceConsoleUI::ShowInstructions()
{
    // TODO: show program instructions
}

void NaturalSequenceConsoleUI::WriteSequence()
{
    for (unsigned int i : NaturalSequence()) 
    {
        std::cout << i << ' '; 

        if (i == m_upper_bound)
        {
            break;
        }
    }

    std::cout << '\n';       
    
}
