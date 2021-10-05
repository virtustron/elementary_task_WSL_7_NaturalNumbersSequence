#pragma once

#include <limits.h>
#include "NaturalSequenceIterator.hpp"


// TODO add upper_bound field and ??lower_bound (test purposes)??
// TODO base class NumberSequence
class NaturalSequence
{
public:
    NaturalSequence(const unsigned int lower_bound = 0, const unsigned int upper_bound = UINT_MAX);
    
    NaturalSequenceIterator begin();
    NaturalSequenceIterator end();

private:
    unsigned int m_lower_bound;
    unsigned int m_upper_bound;
};