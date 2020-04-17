#include <iostream>
#include "Advertising.h"
#include "AdvertisingTV.h"


using namespace std;

double Result(const AdvertisingTV& obj);

  int main()
  {
	AdvertisingTV a("Vodafon", "New tariff plan", "Ukraine", 15, 35, 5000);
	AdvertisingTV b("Kyivstar", "New tariff plan", "Ukraine", 16, 35, 4000);
	cout << "\n  Advertising 1: " << endl;
	cout << a;
	cout << "\n  Advertising 2: " << endl;
	cout << b;
	double res1 = Result(a);
	double res2 = Result(b);
	if (res1 > res2)
	{
		cout << "\n" << "  The first company pays less  for  week advertising than a second."<<"\n\n";
	    cout << "\t" <<  b.GetCustomer()<<"\n";
		cout << "\t" <<  a.GetCustomer()<< "\n\n";
	}

	else
	{
		cout << "\n" << "  The first company pays less for week advertising than a second." << "\n]n";
		cout << "\t" <<  a.GetCustomer() << "\n";
		cout << "\t" <<  b.GetCustomer() << "\n\n";
	}
	    cout << "  The price of two advertisings per week:" << "\n\n";
	    cout << "\t" << res1 + res2 <<"\n\n  ";

	 system("pause");
	 return 0;
  }

   double Result(const AdvertisingTV& obj)
   {
	return ((obj.GetImpressions_per_week() * obj.GetVideo_duration()) / 60.0) * obj.GetCost_per_minute();;
   }

//double t = this->video_duration);      //тривалість одного ролика
//int N = this->impressions_per_week;    //кількість показів упродовж тижня
//double c = this->cost_per_minute;      //вартість за показ 1 хвилини
//double res = (N*t/60)*c                // вартість замовлення реклами за тиждень
