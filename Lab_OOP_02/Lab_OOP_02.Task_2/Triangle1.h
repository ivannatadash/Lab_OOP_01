
#include <iostream>
#include <cmath>

using namespace std;

double IsNumber(string);

class Triangle1
{
private:
    double side1;
    double side2;
    double side3;
    double* sides;

public:

    Triangle1();
    Triangle1(double a, double b, double c);
    Triangle1(const Triangle1& obj);
    ~Triangle1();

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

    void Print();

    double Perimeter();
    double Square();
    double Angle(double a, double b, double c);
};