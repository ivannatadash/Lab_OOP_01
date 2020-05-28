#include "triangle.h"


triangle::triangle()
{
	sides = new double[3];
	for (int i = 0; i < 3; i++)
		sides[i] = 0;
}

triangle::triangle(double a, double b, double c)
{
	sides = new double[3];
	this->sides[0] = a;
	this->sides[1] = b;
	this->sides[2] = c;
}
triangle::~triangle()
{ 
	delete[] sides; 
}

triangle& triangle::get_instance()
{
	if (!p_instance) {
		p_instance = new triangle();
		destroyer.initialize(p_instance);
	}
	return *p_instance;
}

triangle& triangle::get_instance(double a, double b, double c) 
{
	if (!p_instance) {
		p_instance = new triangle(a, b, c);
		destroyer.initialize(p_instance);
	}
	return *p_instance;
}

triangle& triangle::operator+=(double x)
{
	SetX(sides[0] + x);
	SetY(sides[1] + x);
	SetZ(sides[2] + x);
	return *this;
}

double triangle::GetX()
{
	return sides[0];
}
double triangle::GetY()
{ 
	return sides[1];
}
double triangle::GetZ()
{ 
	return sides[2]; 
}

double triangle::GetSide(int i)
{
	return sides[i - 1]; 
}

void triangle::SetX(double a)
{ 
	sides[0] = a; 
}
void triangle::SetY(double a)
{ 
	sides[1] = a;
}
void triangle::SetZ(double a)
{
	sides[2] = a;
}


int triangle::SetX(string str)
{
	double number = is_number(str);
	if (number)
	{
		this->sides[0] = number;
		return 0;
	}
	cout << "Enter number.\n";
	return 1;
}
int triangle::SetY(string str)
{
	double number = is_number(str);
	if (number)
	{
		this->sides[1] = number;
		return 0;
	}
	cout << "Enter number.\n";
	return 1;
}
int triangle::SetZ(string str)
{
	double number = is_number(str);
	if (number)
	{
		this->sides[2] = number;
		return 0;
	}
	cout << "Enter number.\n";
	return 1;
}

void triangle::Print() const
{
	cout << "Sides: ";
	for (int i = 0; i < 3; i++)
		cout << this->sides[i] << '\t';
}
double triangle::Perimeter() const
{
	double perimeter = 0;
	for (double* i = sides; i < sides + 3; ++i)
		perimeter += *i;
	return perimeter;
}
double triangle::Square() const
{
	double p = Perimeter();
	return sqrt(p * (p - sides[0]) * (p - sides[1]) * (p - sides[3]));
}
double triangle::Angle(double a, double b, double c) const
{
	return acos((a * a + b * b - c * c) / (2 * a * b));
}

triangle* triangle::p_instance = 0;
triangle_destroyer triangle::destroyer;