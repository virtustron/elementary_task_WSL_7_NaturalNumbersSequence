#include "NaturalSequence.hpp"

NaturalSequence::NaturalSequence(const unsigned int lower_bound, const unsigned int upper_bound)
{
    // TODO add validation
    m_lower_bound = lower_bound;
    m_upper_bound = upper_bound;
}


NaturalSequenceIterator NaturalSequence::begin() 
{
    return NaturalSequenceIterator(m_lower_bound);
}

NaturalSequenceIterator NaturalSequence::end() 
{
    return NaturalSequenceIterator(m_upper_bound);
}

