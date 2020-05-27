#include "Student.h"

Student::Student(string l, string i)
{
    lastname_name = l;
    institute = i;
}

string Student::getLastname_name()
{
    return lastname_name;
}

ostream& operator<< (ostream& ostr, const Student& st)
{
    ostr << "Student: " + st.lastname_name + "\nInstitute: " + st.institute;
    return ostr;
}