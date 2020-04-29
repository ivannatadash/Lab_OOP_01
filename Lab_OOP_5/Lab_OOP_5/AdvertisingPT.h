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
        const char* customer,             //��������(����� �����)
        const char* advertising_title,    //����� �������
        const char* location,                   //���� ���������
        double haight,                    //������ �������
        double width,                     //������ �������
        int    amount_placement_days,     //�-�� ��� ���������
        double cost_sqr_per_day);         //������� �� 1 ��.�. �� 1 ����

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
        //double h = haight,                    //������ �������
        //double w = width,                     //������ �������
        //double bigbord_area(b_a) = (h*w)      //�����  �������
        //int a_m = amount_placement_days       //�-�� ��� ���������
        //double c/d = cost_sqr_per_day)        //������� �� 1 ��.�. �� 1 ����
        //double res = (a_m * c/d ) * b_a       //������� ���������� ������� �� �������

    void Print() override
    {
        cout << *this;
    }

    friend ostream& operator<<(ostream& out, const AdvertisingPT& v);

};

