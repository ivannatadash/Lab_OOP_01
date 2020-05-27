#include "Institute.h"

Institute::Institute(string l)
{
    lastname_name = l;
    number = 0;
}

string Institute::getLastname_name()
{
    return lastname_name;
}

void Institute::add(string l)
{
    students[number++] = new Student(l, lastname_name);
}