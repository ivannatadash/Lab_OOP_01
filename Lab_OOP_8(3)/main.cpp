#include <iostream>
#include <cmath>
#include "triangle.h"

using namespace std;

double is_number(string str);
double enter_number();


int main()
{
	triangle& t = triangle::get_instance(1, 2, 3);
	cout << t;
	t = triangle::get_instance(4, 5, 6);
	cout << t;
	t += 2;
	cout << t;

	return 0;
}

double is_number(string str)
{
	double number = 0;
	double base = 1;
	char* p;
	for (p = &str[0]; *p != '\0'; p++)
	{
		if ((*p >= '0' && *p <= '9') || (*p == '.') || (*p == ','));
		else return 0;

	}
	for (p = &str[0] + 1; *p != '\0'; p++)
	{
		if ((*p == '.') || (*p == ','))
			break;
		base *= 10;
	}
	for (p = &str[0]; base >= 1; p++, base /= 10)
		number += base * (*p - '0');
	if ((*p == '.') || (*p == ','))
		for (p++; *p != '\0'; p++, base /= 10)
			number += base * (*p - '0');
	return number;
}

double enter_number()
{
	cout << "\nEnter number: ";
	string check;
	cin >> check;
	double number = is_number(check);
	while (!number)
	{
		cout << "\nEnter number: ";
		double plus = is_number(check);
		cin >> check;
	}
	return number;
}

ostream& operator<<(ostream& cout, const triangle& obj)
{
	obj.Print();
	cout << "\tSquare: " << obj.Square() << "\n";
	return cout;
}