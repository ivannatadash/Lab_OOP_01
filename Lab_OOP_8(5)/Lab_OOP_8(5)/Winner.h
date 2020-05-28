#pragma once
#include "Strategy.h"

class Winner :public Strategy
{
private:
    int rank;
    string prize;

public:
    Winner() :Strategy()
    {
        this->rank = 0;
        this->prize = "";
    }

    Winner(string competition, string name, int id, int rank, string prize) :Strategy(competition, name, id)
    {
        this->rank = rank;
        this->prize = prize;
    }

    ~Winner()
    {

    }

    int GetRank() override
    {
        return this->rank;
    }
};