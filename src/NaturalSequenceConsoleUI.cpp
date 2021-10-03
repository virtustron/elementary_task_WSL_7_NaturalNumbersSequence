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
    // std::find requires an input iterator
    //auto range = NaturalSequence<m_upper_bound>();
    //auto itr = std::find(range.begin(), range.end(), 18);
    //std::cout << *itr << '\n'; // 18
 
    // Range::iterator also satisfies range-based for requirements
    for (unsigned int i : NaturalSequence<10>()) 
    {
        std::cout << i << ' '; 
    }

    std::cout << '\n';
        
    /*
    unsigned int current_number = m_iterator.Current();
    
    while (current_number*current_number < m_upper_bound)
    {
        std::cout << current_number << ", ";
        m_iterator.Next();
        current_number = m_iterator.Current();
    }

    std::cout << "\n"; 

    */
}
