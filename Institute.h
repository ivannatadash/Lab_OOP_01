#pragma once
#include "Student.h"
class Institute
{
    Student* students[31];
    string lastname_name;

    int number;

public:

    friend class InstituteIterator;
    Institute(string l);

    string getLastname_name();

    void add(string l);
};
