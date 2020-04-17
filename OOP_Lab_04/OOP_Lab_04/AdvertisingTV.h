#pragma once
#include "Advertising.h"
#include <iostream>
using namespace std;

class AdvertisingTV :public Advertising
{
  private:

	char*  tv_title;
	double video_duration;
	int    impressions_per_week;
	double cost_per_minute;

  public:

	   AdvertisingTV(
		const char* customer,             //��������(����� �����)
		const char* advertising_title,    //����� �������
		const char* tv_title,             //����� ����������
		double      video_duration,       //��������� ������ ������
		int         impressions_perweek,  //������� ������ �������� �����
		double      cost_per_minute);     //������� �� ����� 1 �������

	  AdvertisingTV();
	 ~AdvertisingTV();

	double GetCost_per_minute() const;
	int    GetImpressions_per_week() const;
	double GetVideo_duration() const;
	char*  GetTV_title() const;

	friend ostream& operator<<(ostream& out, const AdvertisingTV& v);

};


