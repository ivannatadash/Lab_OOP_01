#include "Triangle.h"

Triangle::Triangle()
{
    side1 = side2 = side3 = 0;
    cout << "Const on\n";
};
Triangle::Triangle(double a, double b, double c)
{
    side1 = a; side2 = b; side3 = c;
};

Triangle::~Triangle()
{
    cout << "Dest on\n";
};

double Triangle::GetX() { return side1; }
double Triangle::GetY() { return side2; }
double Triangle::GetZ() { return side3; }

void Triangle::SetX(double a)
{
    side1 = a;
}
void Triangle::SetY(double a)
{
    side2 = a;
}
void Triangle::SetZ(double a)
{
    side3 = a;
}

int Triangle::SetX(string str)
{
    double number = IsNumber(str);
    if (number)
    {
        this->side1 = number;
        return 0;
    }
    cout << "Enter number.\n";
    return 1;
}
int Triangle::SetY(string str)
{
    double number = IsNumber(str);
    if (number)
    {
        this->side2 = number;
        return 0;
    }
    cout << "Enter number.\n";
    return 1;
}
int Triangle::SetZ(string str)
{
    double number = IsNumber(str);
    if (number)
    {
        this->side3 = number;
        return 0;
    }
    cout << "Enter number.\n";
    return 1;
}


void Triangle::Print()
{
    cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
}

double Triangle::Perimeter()
{
    return this->side1 + this->side2 + this->side3;
}

double Triangle::Square()
{
    double p = Perimeter();
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

double Triangle::Angle(double a, double b, double c)
{
    return acos((a * a + b * b - c * c) / (2 * a * b));
}

