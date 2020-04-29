#pragma once
#include "Advertising.h"
#include <iostream>
using namespace std;

class AdvertisingYT :public Advertising
{
private:

    double video_duration;
    int    impressions_per_week;
    double cost_per_minute;

public:

    AdvertisingYT(
        const char* customer,             //замовник(назва фірми)
        const char* advertising_title,    //назва реклами
        double      video_duration,       //тривалість одного ролика
        int         impressions_per_week, //кількість показів упродовж тижня
        double      cost_per_minute);     //вартість за показ 1 хвилини

    AdvertisingYT();
    ~AdvertisingYT();

    double GetCost_per_minute() const;
    int    GetImpressions_per_week() const;
    double GetVideo_duration() const;

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

    friend ostream& operator<<(ostream& out, const AdvertisingYT& v);

};

