#include "Triangle.h"

Triangle::Triangle()
{
    side1 = side2 = side3 = 0;
    sides = new double[3];
    for (int i = 0; i < 3; i++)
        sides[i] = 0;
}

Triangle::Triangle(double a, double b, double c)
{
    sides = new double[3];
    side1 = a;
    this->sides[0] = a;
    side2 = b;
    this->sides[1] = b;
    side3 = c;
    this->sides[2] = c;
}

Triangle::Triangle(const Triangle& obj)
{
    this->side1 = obj.side1;
    this->side2 = obj.side2;
    this->side3 = obj.side3;

    this->sides = new double[3];
    for (int i = 0; i < 3; i++)
        this->sides[i] = obj.sides[i];
}

Triangle::~Triangle()
{
    delete[] sides;
}

bool Triangle::operator<(const Triangle& obj2)
{
    return this->Square() < obj2.Square();
}

Triangle& Triangle::operator+=(double x)
{
    SetX(side1 + x);
    SetY(side2 + x);
    SetZ(side3 + x);
    return *this;
}

const Triangle& Triangle::operator=(const Triangle& obj)
{
    this->side1 = obj.side1;
    this->side2 = obj.side2;
    this->side3 = obj.side3;

    this->sides = new double[3];
    for (int i = 0; i < 3; i++)
        this->sides[i] = obj.sides[i];
    return  obj;
}

double Triangle::GetX()
{
    return side1;
}

double Triangle::GetY()
{
    return side2;
}

double Triangle::GetZ()
{
    return side3;
}

double Triangle::GetSide(int i)
{
    return sides[i - 1];
}

void Triangle::SetX(double a)
{
    side1 = a; sides[0] = a;
}

void Triangle::SetY(double a)
{
    side2 = a; sides[1] = a;
}

void Triangle::SetZ(double a)
{
    side3 = a; sides[2] = a;
}

int Triangle::SetX(string str)
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

int Triangle::SetY(string str)
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

int Triangle::SetZ(string str)
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

void Triangle::Print() const
{
    cout << "Sides: ";
    for (int i = 0; i < 3; i++)
        cout << this->sides[i] << '\t';
    //cout << '\n';
}

double Triangle::Perimeter() const
{
    return side1 + side2 + side3;
}

double Triangle::Square() const
{
    double p = Perimeter();
    return sqrt(p * (p - side1) * (p - side2) * (p - side3));
}

double Triangle::Angle(double a, double b, double c) const
{
    return acos((a * a + b * b - c * c) / (2 * a * b));

}

ostream& operator<<(ostream& cout, const Triangle& obj)
{
    obj.Print();
    cout << "\tSquare: " << obj.Square() << "\n";
    return cout;
}

istream& operator>>(istream& cin, Triangle& obj)
{
    string side;
    cout << "\nEnter 1 side: ";
    cin >> side;
    obj.SetX(side);
    cout << "Enter 2 side: ";
    cin >> side;
    obj.SetY(side);
    cout << "Enter 3 side: ";
    cin >> side;
    obj.SetZ(side);
    return cin;
}
