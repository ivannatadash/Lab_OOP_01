#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class triangle;

double is_number(string);
double enter_number();

class triangle_destroyer
{
private:
	triangle* p_instance;
public:
	~triangle_destroyer()
	{
		delete p_instance;
	}

	void initialize(triangle* p)
	{
		p_instance = p;
	}
};

class triangle
{
private:
	double* sides;
	static triangle* p_instance;
	static triangle_destroyer destroyer;

protected:
	triangle();
	triangle(double a, double b, double c);
	~triangle();

	friend class triangle_destroyer;

public:
	static triangle& get_instance();
	static triangle& get_instance(double a, double b, double c);

	triangle& operator+=(double x);
	
	friend ostream& operator<<(ostream& cout, const triangle& obj);

	double GetX();
	double GetY();
	double GetZ(); 

	double GetSide(int i);

	void SetX(double a);
	void SetY(double a);
	void SetZ(double a);

	int SetX(string str);
	int SetY(string str);
	int SetZ(string str);
	void Print() const;
	double Perimeter() const;
	double Square() const;
	double Angle(double a, double b, double c) const;
};



