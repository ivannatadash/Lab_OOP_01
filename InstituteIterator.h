#pragma once
#include "Institute.h"

class InstituteIterator
{
private:

    const Institute& institute;
    int ind = 0;

public:

    InstituteIterator(const Institute& p);

    void operator++(int);

    bool operator()();

    Student& operator *();
};
