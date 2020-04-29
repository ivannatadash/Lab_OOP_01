#pragma once
#include "Advertising.h"
#include <iostream>
using namespace std;

class AdvertisingTV :public Advertising
{
private:

    char* tv_title;
    double video_duration;
    int    impressions_per_week;
    double cost_per_minute;

public:

    AdvertisingTV(
        const char* customer,             //замовник(назва фірми)
        const char* advertising_title,    //назва реклами
        const char* tv_title,             //назва телеканалу
        double      video_duration,       //тривалість одного ролика
        int         impressions_per_week, //кількість показів упродовж тижня
        double      cost_per_minute);     //вартість за показ 1 хвилини

    AdvertisingTV();
    ~AdvertisingTV();

    double GetCost_per_minute() const;
    int    GetImpressions_per_week() const;
    double GetVideo_duration() const;
    char*  GetTV_title() const;

    double Result() override
    {
        return ((GetImpressions_per_week() * GetVideo_duration()) / 60.0) * GetCost_per_minute();
    }

    //double t = this->video_duration);      //тривалість одного ролика(в секундах)
    //int N = this->impressions_per_week;    //кількість показів упродовж тижня
    //double c = this->cost_per_minute;      //вартість за показ 1 хвилини
    //double res = (N*t/60)*c                //вартість замовлення реклами за тиждень

    void Print() override
    {
        cout << *this;
    }

    friend ostream& operator<<(ostream& out, const AdvertisingTV& v);

};