#include "InstituteIterator.h"

InstituteIterator::InstituteIterator(const Institute& p) : institute(p)
{
    ind = 0;
}

void InstituteIterator::operator++(int)
{
    ind = ind + 2;
}

bool InstituteIterator::operator()()
{
    return ind != institute.number;
}

Student& InstituteIterator::operator*()
{
    return *institute.students[ind];
}