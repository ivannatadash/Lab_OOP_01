#pragma once
#include "Strategy.h"

class Student :public Strategy
{
protected:
    int first;
    int second;
    int third;

public:
    Student() :Strategy()
    {
        this->first = 0;
        this->second = 0;
        this->third = 0;
    }

    Student(Strategy& obj)
    {
        this->competition = obj.GetCompetition();
        this->name = obj.GetName();
        this->id = obj.GetID();
        this->first = 0;
        this->second = 0;
        this->third = 0;
    }

    ~Student()
    {

    }
    

    int Sum()
    {
        return this->first + this->second + this->third;
    }

    int GetRank() override
    {
        return -1;
    }

    void Increment1()
    {
        ++first;
    }

    void Increment2()
    {
        ++second;
    }

    void Increment3()
    {
        ++third;
    }

    void PrintRank()
    {
        cout << this->first << '\t' << this->second << '\t' << this->third << '\n';
    }
};
