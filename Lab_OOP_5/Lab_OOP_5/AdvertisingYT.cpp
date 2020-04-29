#include "AdvertisingYT.h"
#include <iostream>
using namespace std;

AdvertisingYT::AdvertisingYT(
    const char* customer,
    const char* advertising_title,
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
}


AdvertisingYT::AdvertisingYT()
{
    cout << "AdvertisingTV::AdvertisingTV()";
}

AdvertisingYT::~AdvertisingYT()
{
    cout << "AdvertisingTV::~AdvertisingTV()";
}

double AdvertisingYT::GetCost_per_minute() const
{
    return this->cost_per_minute;
}

int AdvertisingYT::GetImpressions_per_week() const
{
    return this->impressions_per_week;
}

double AdvertisingYT::GetVideo_duration() const
{
    return this->video_duration;
}


ostream& operator<<(ostream& out, const AdvertisingYT& advertising)
{
    out << "\t" << "customer:            " << "\t" << advertising.GetCustomer() << endl;
    out << "\t" << "advertising title:   " << "\t" << advertising.GetAdvertising_title() << endl;
    out << "\t" << "video duration:      " << "\t" << advertising.GetVideo_duration() << endl;
    out << "\t" << "impressions per week:" << "\t" << advertising.GetImpressions_per_week() << endl;
    out << "\t" << "cost per minute:     " << "\t" << advertising.GetCost_per_minute() << endl;
    return out;

}