//Створити базовий клас РЕКЛАМА(задаються замовник, назва реклами). +
//Створити похідні класи:
//РЕКЛАМА НА ТЕЛЕБАЧЕННІ(задаються назва телеканалу,тривалість 1 ролика, кількість показів упродовж тижня, вартість за показ 1 хвилини).+ 
//РЕКЛАМА НА БІГБОРДАХ(задаються місце розміщення, розмір бігборда(ширина і висота), к-ть днів розміщення, вартість за 1 кв.м. на 1 день).+
//Для введених даних про виготовлену і розміщену рекламу обчислити вартості замовлень і впорядкувати їх за зростанням, визначити сумарну вартість.
//Для перевірки використати  масив вказівників на об'єкти базового класу, яким присвоєти адреси об'єктів похідних класів.
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

    virtual double Result()
    {
        return 0;
    }
    virtual void Print()
    {
        return;
    }

    friend ostream& operator <<(ostream& out, const Advertising&);
};