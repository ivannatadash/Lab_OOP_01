#pragma once
#include "Advertising.h"
#include <iostream>
    using namespace std;

    class AdvertisingPT :public Advertising
{
private:

    char* location;
    double haight;
    double width;
    int    amount_placement_days;
    double cost_sqr_per_day;


public:

    AdvertisingPT(
        const char* customer,             //замовник(назва фірми)
        const char* advertising_title,    //назва реклами
        const char* location,                   //місце розміщення
        double haight,                    //висота постера
        double width,                     //ширина постера
        int    amount_placement_days,     //к-ть днів розміщення
        double cost_sqr_per_day);         //вартість за 1 кв.м. на 1 день

    AdvertisingPT();
    ~AdvertisingPT();

    char* GetLocation() const;
    double GetHaight() const;
    double GetWidth() const;
    int    GetAmount_placement_days() const;
    double GetCost_sqr_per_day() const;

    double Result() override
    {
        return (GetAmount_placement_days() * GetCost_sqr_per_day()) * (GetHaight() * GetWidth());
    }
        //double h = haight,                    //висота постера
        //double w = width,                     //ширина постера
        //double bigbord_area(b_a) = (h*w)      //площа  бігборда
        //int a_m = amount_placement_days       //к-ть днів розміщення
        //double c/d = cost_sqr_per_day)        //вартість за 1 кв.м. на 1 день
        //double res = (a_m * c/d ) * b_a       //вартість замовлення реклами за тиждень

    void Print() override
    {
        cout << *this;
    }

    friend ostream& operator<<(ostream& out, const AdvertisingPT& v);

};

