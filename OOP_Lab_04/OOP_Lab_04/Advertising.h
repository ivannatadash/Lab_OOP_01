//Створити базовий клас РЕКЛАМА(задаються замовник, назва реклами). +
//Створити похідний клас РЕКЛАМА НА ТЕЛЕБАЧЕННІ(задаються назва телеканалу,+
//тривалість 1 ролика, кількість показів упродовж тижня, вартість за показ 1 хвилини). +
//Для введених даних про виготовлену і розміщену рекламу обчислити вартості замовлень
//і впорядкувати їх за зростанням, визначити сумарну вартість.

#pragma once
#include <iostream>

using namespace std;

class Advertising
{
  private:
	
	char* customer;
	
	char* advertising_title;

  public:
	 Advertising(const char* customer, const  char* advertising_title);
	 Advertising();
	~Advertising();

	const char* GetCustomer() const;
	const char* GetAdvertising_title() const;

	friend ostream& operator<<(ostream& out, const Advertising&);
};