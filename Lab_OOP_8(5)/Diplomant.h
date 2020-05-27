#pragma once
#include "Strategy.h"

class Diplomant :public Strategy
{
private:
    int rank;

public:
    Diplomant() :Strategy()
    {
        this->rank = 0;
    }

    Diplomant(string competition, string name, int id, int rank) :Strategy(competition, name, id)
    {
        this->rank = rank;
    }

    ~Diplomant()
    {

    }
   

    int GetRank() override
    {
        return this->rank;
    }
};