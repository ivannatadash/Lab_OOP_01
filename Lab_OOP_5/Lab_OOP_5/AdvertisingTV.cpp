#pragma once
#include "AdvertisingTV.h"
#include <iostream>
using namespace std;

AdvertisingTV::AdvertisingTV(
    const char* customer,
    const char* advertising_title,
    const char* tv_title,
    double video_duration,
    int impressions_per_week,
    double cost_per_minute) : Advertising(customer, advertising_title)

{

    if (0.0 > video_duration)
    {
        throw "Incorrect interest video duration";
    }

    this->video_duration = video_duration;

    if (!(0 < impressions_per_week))
    {
        throw "Incorrect interest impressions per week";
    }

    this->impressions_per_week = impressions_per_week;

    if (!(0.0 < cost_per_minute))
    {
        throw "Incorrect interest cost per minute";
    }

    this->cost_per_minute = cost_per_minute;
    this->tv_title = (char*)tv_title;
}


AdvertisingTV::AdvertisingTV()
{
    cout << "AdvertisingTV::AdvertisingTV()";
}

AdvertisingTV::~AdvertisingTV()
{
    cout << "AdvertisingTV::~AdvertisingTV()";
}

double AdvertisingTV::GetCost_per_minute() const
{
    return this->cost_per_minute;
}

int AdvertisingTV::GetImpressions_per_week() const
{
    return this->impressions_per_week;
}

double AdvertisingTV::GetVideo_duration() const
{
    return this->video_duration;
}

char* AdvertisingTV::GetTV_title() const
{
    return this->tv_title;
}



ostream& operator<<(ostream& out, const AdvertisingTV& advertising)
{
    out << "\t" << "customer:            " << "\t" << advertising.GetCustomer() << endl;
    out << "\t" << "advertising title:   " << "\t" << advertising.GetAdvertising_title() << endl;
    out << "\t" << "tv title:            " << "\t" << advertising.GetTV_title() << endl;
    out << "\t" << "video duration:      " << "\t" << advertising.GetVideo_duration() << endl;
    out << "\t" << "impressions per week:" << "\t" << advertising.GetImpressions_per_week() << endl;
    out << "\t" << "cost per minute:     " << "\t" << advertising.GetCost_per_minute() << endl;
    return out;

}