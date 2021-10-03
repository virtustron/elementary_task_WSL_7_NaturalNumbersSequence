#include "NaturalSequence.hpp"

NaturalSequenceIterator NaturalSequence::begin() 
{
    return NaturalSequenceIterator(0);
}

NaturalSequenceIterator NaturalSequence::end() 
{
    return NaturalSequenceIterator(UINT_MAX);
}

