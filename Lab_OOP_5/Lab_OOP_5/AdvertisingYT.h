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
        const char* customer,             //��������(����� �����)
        const char* advertising_title,    //����� �������
        double      video_duration,       //��������� ������ ������
        int         impressions_per_week, //������� ������ �������� �����
        double      cost_per_minute);     //������� �� ����� 1 �������

    AdvertisingYT();
    ~AdvertisingYT();

    double GetCost_per_minute() const;
    int    GetImpressions_per_week() const;
    double GetVideo_duration() const;

    double Result() override
    {
        return ((GetImpressions_per_week() * GetVideo_duration()) / 60.0) * GetCost_per_minute();
    }

    //double t = this->video_duration);      //��������� ������ ������(� ��������)
    //int N = this->impressions_per_week;    //������� ������ �������� �����
    //double c = this->cost_per_minute;      //������� �� ����� 1 �������
    //double res = (N*t/60)*c                //������� ���������� ������� �� �������

    void Print() override
    {
        cout << *this;
    }

    friend ostream& operator<<(ostream& out, const AdvertisingYT& v);

};

