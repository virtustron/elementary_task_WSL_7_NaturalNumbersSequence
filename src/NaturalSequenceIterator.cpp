#include <limits.h>
#include "NaturalSequenceIterator.hpp"

NaturalSequenceIterator::NaturalSequenceIterator()
{
    m_iterator = 1;
}

void NaturalSequenceIterator::Next()
{
    m_iterator++;
}

bool NaturalSequenceIterator::IsDone() 
{
    return (m_iterator == UINT_MAX);
}

unsigned int NaturalSequenceIterator::Current() 
{
  return m_iterator;
}