#pragma once

#include "INumbersSequenceIterator.hpp"

class NaturalSequenceIterator : public INumbersSequenceIterator
{
public:
    NaturalSequenceIterator() ;
    void Next() override; 
    bool IsDone() override;
    unsigned int Current() override;
private:
    unsigned int m_iterator = 0;
};