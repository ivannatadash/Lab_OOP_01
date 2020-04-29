#pragma once
#include "AdvertisingBB.h"
#include <iostream>
using namespace std;

AdvertisingBB::AdvertisingBB(
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


AdvertisingBB::AdvertisingBB()
{
    cout << "AdvertisingBB::AdvertisingBB()";
}

AdvertisingBB::~AdvertisingBB()
{
    cout << "AdvertisingBB::~AdvertisingBB()";
}

char* AdvertisingBB::GetLocation() const
{
    return this->location;
}

double AdvertisingBB::GetHaight() const
{
    return this->haight;
}

double AdvertisingBB::GetWidth() const
{
    return this->width;
}

int AdvertisingBB::GetAmount_placement_days() const
{
    return this->amount_placement_days;
}

double AdvertisingBB::GetCost_sqr_per_day() const
{
    return this->cost_sqr_per_day;
}

ostream& operator<<(ostream& out, const AdvertisingBB& advertising)
{
    out << "\t" << "customer:              " << "\t" << advertising.GetCustomer() << endl;
    out << "\t" << "advertising title:     " << "\t" << advertising.GetAdvertising_title() << endl;
    out << "\t" << "location:              " << "\t" << advertising.GetLocation() << endl;
    out << "\t" << "bigbord haight:        " << "\t" << advertising.GetHaight() << endl;
    out << "\t" << "bigbord width:         " << "\t" << advertising.GetWidth() << endl;
    out << "\t" << "amount placement days: " << "\t" << advertising.GetAmount_placement_days() << endl;
    out << "\t" << "cost sqr per day:      " << "\t" << advertising.GetCost_sqr_per_day() << endl;
    return out;
    
}
