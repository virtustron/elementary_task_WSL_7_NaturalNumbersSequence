#pragma once

class NaturalSequenceIterator
{
public:
    NaturalSequenceIterator();
    void Next(); 
    bool IsDone();
    unsigned int Current();
 
private:
    unsigned int m_iterator;
};