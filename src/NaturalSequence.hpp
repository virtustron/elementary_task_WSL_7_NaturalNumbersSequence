#pragma once

#include <iterator> // For std::input_iterator_tag
#include <limits.h>

class NaturalSequence
{
public:
    // class Iterator originally from
    //   https://en.cppreference.com/w/cpp/iterator/iterator
    class Iterator: public std::iterator<
                        std::input_iterator_tag,           // iterator_category
                        unsigned int,                      // value_type
                        unsigned int,                      // difference_type
                        const unsigned int*,               // pointer
                        unsigned int                       // reference
                        >
    {
        unsigned int m_num = 0;
    public:
        explicit Iterator(unsigned int num = 0) : m_num(num) {}
        Iterator& operator++() {++m_num; return *this;}
        Iterator operator++(int) {Iterator retval = *this; ++(*this); return retval;}
        bool operator==(Iterator other) const {return m_num == other.m_num;}
        bool operator!=(Iterator other) const {return !(*this == other);}
        reference operator*() const {return m_num;}
    };
    Iterator begin() {return Iterator(0);}
    Iterator end() {return Iterator(UINT_MAX);}
};