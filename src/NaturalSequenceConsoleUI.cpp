#include "NaturalSequenceConsoleUI.hpp"

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
    auto natural_sequence = NaturalSequence(0, 100);
    
    for (auto it = natural_sequence.begin(), end = natural_sequence.end(); it < end; ++it)
    {
        const auto i = *it;
        std::cout << i << ' ';
    }

    std::cout << '\n';       
    
}
