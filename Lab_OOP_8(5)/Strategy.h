#pragma once
#include <iostream>

using namespace std;

class Strategy
{
protected:
    string competition;
    string name;
    int id;
public:
    Strategy()
    {
        this->competition = "";
        this->name = "";
        this->id = 0;
    }

    Strategy(string competition, string name, int id)
    {
        this->competition = competition;
        this->name = name;
        this->id = id;
    }

    ~Strategy()
    {

    }

    virtual string GetName()
    {
        return this->name;
    }

    virtual int GetID()
    {
        return this->id;
    }

    virtual string GetCompetition()
    {
        return this->competition;
    }

    virtual int GetRank() = 0;
};