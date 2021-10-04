#pragma once

#include "NaturalSequenceIterator.hpp"


// TODO add upper_bound field and ??lower_bound (test purposes)??
// TODO base class NumberSequence
class NaturalSequence
{
public:
    NaturalSequenceIterator begin();
    NaturalSequenceIterator end();
};