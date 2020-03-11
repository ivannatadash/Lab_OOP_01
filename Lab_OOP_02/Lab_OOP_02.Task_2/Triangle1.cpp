#include "Triangle1.h"

Triangle1::Triangle1()
{
    side1 = side2 = side3 = 0;
    sides = new double[3];
    for (int i = 0; i < 3; i++)
        sides[i] = 0;
    cout << "Const on\n";
};
    
Triangle1::Triangle1(double a, double b, double c)
{
    sides = new double[3];
    side1 = a;
    this->sides[0] = a;
    side2 = b;
    this->sides[1] = b;
    side3 = c;
    this->sides[2] = c;
};

Triangle1::Triangle1(const Triangle1& obj)
{
    this->side1 = obj.side1;
    this->side2 = obj.side2;
    this->side3 = obj.side3;

    this->sides = new double[3];
    for (int i = 0; i < 3; i++)
        this->sides[i] = obj.sides[i];
};

Triangle1::~Triangle1() 
{ 
    delete[] sides; cout << "Dest on\n"; 
}


    double Triangle1::GetX() { return side1; }
    double Triangle1::GetY() { return side2; }
    double Triangle1::GetZ() { return side3; }

    double Triangle1::GetSide(int i) { return sides[i - 1]; }

    void Triangle1::SetX(double a) { side1 = a; sides[0] = a; }
    void Triangle1::SetY(double a) { side2 = a; sides[1] = a; }
    void Triangle1::SetZ(double a) { side3 = a; sides[2] = a; }

    int Triangle1::SetX(string str)
    {
        double number = IsNumber(str);
        if (number)
        {
            side1 = this->sides[0] = number;
            return 0;
        }
        cout << "Enter number.\n";
        return 1;
    }
    int Triangle1::SetY(string str)
    {
        double number = IsNumber(str);
        if (number)
        {
            side2 = this->sides[1] = number;
            return 0;
        }
        cout << "Enter number.\n";
        return 1;
    }
    int Triangle1::SetZ(string str)
    {
        double number = IsNumber(str);
        if (number)
        {
            side3 = this->sides[2] = number;
            return 0;
        }
        cout << "Enter number.\n";
        return 1;
    }

    void Triangle1::Print()
    {
        cout << "Sides: ";
        for (int i = 0; i < 3; i++)
            cout << this->sides[i] << '\t';
        cout << '\n';
    }

    double Triangle1::Perimeter() { return side1 + side2 + side3; }

    double Triangle1::Square()
    {
        double p = Perimeter();
        return sqrt(p * (p - side1) * (p - side2) * (p - side3));
    }

    double Triangle1::Angle(double a, double b, double c)
    {
        return acos((a * a + b * b - c * c) / (2 * a * b));
    }

