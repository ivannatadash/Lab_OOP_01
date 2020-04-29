#pragma once
#include "AdvertisingPT.h"
#include <iostream>
using namespace std;

AdvertisingPT::AdvertisingPT(
    const char* customer,
    const char* advertising_title,
    const char* location,
    double haight,
    double width,
    int    amount_placement_days,
    double cost_sqr_per_day) : Advertising(customer, advertising_title)

{

    if (!(0 < cost_sqr_per_day))
    {
        throw "Incorrect interest cost sqr per day";
    }

    this->cost_sqr_per_day = cost_sqr_per_day;

    if (!(0 < haight))
    {
        throw "Incorrect interest bigbord_haight";
    }

    this->haight = haight;

    if (!(0 < width))
    {
        throw "Incorrect interest bigbord width";
    }

    this->width = width;

    if (!(0.0 < amount_placement_days))
    {
        throw "Incorrect interest amount placement days";
    }

    this->amount_placement_days = amount_placement_days;

    this->cost_sqr_per_day = cost_sqr_per_day;
    this->location = (char*)location;
}


AdvertisingPT::AdvertisingPT()
{
    cout << "AdvertisingBB::AdvertisingBB()";
}

AdvertisingPT::~AdvertisingPT()
{
    cout << "AdvertisingBB::~AdvertisingBB()";
}

char* AdvertisingPT::GetLocation() const
{
    return this->location;
}

double AdvertisingPT::GetHaight() const
{
    return this->haight;
}

double AdvertisingPT::GetWidth() const
{
    return this->width;
}

int AdvertisingPT::GetAmount_placement_days() const
{
    return this->amount_placement_days;
}

double AdvertisingPT::GetCost_sqr_per_day() const
{
    return this->cost_sqr_per_day;
}

ostream& operator<<(ostream& out, const AdvertisingPT& advertising)
{
    out << "\t" << "customer:              " << "\t" << advertising.GetCustomer() << endl;
    out << "\t" << "advertising title:     " << "\t" << advertising.GetAdvertising_title() << endl;
    out << "\t" << "location:              " << "\t" << advertising.GetLocation() << endl;
    out << "\t" << "poster haight:         " << "\t" << advertising.GetHaight() << endl;
    out << "\t" << "poster width:          " << "\t" << advertising.GetWidth() << endl;
    out << "\t" << "amount placement days: " << "\t" << advertising.GetAmount_placement_days() << endl;
    out << "\t" << "cost sqr per day:      " << "\t" << advertising.GetCost_sqr_per_day() << endl;
    return out;

}
