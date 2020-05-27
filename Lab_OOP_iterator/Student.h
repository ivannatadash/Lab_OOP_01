#pragma once
#include <iostream> 
#include <string> 

using namespace std;


class Student
{
    string lastname_name;
    string institute;

public:

    Student(string l, string i);


    string getLastname_name();


    friend ostream& operator<< (ostream& ostr, const Student& st);
};

