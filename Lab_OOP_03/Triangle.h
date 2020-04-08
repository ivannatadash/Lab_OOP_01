#pragma once
#include <iostream>
using namespace std;
double IsNumber(string);

class Triangle
{
private:
    double side1;
    double side2;
    double side3;
    double* sides;

public:

    Triangle();
    Triangle(double a, double b, double c);
    Triangle(const Triangle& obj);
    ~Triangle();
    bool operator<(const Triangle& obj2);
    Triangle& operator+=(double x);
    friend ostream& operator<<(ostream& cout, const Triangle& obj);
    friend istream& operator>>(istream& cin, Triangle& obj);
    const Triangle& operator=(const Triangle& obj);

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
