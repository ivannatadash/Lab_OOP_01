
//1.�������� ���� - ���������. 2.� ������� ������ ������� ����: ������� �����.3.��������� �����������,4. ����������, 
//5.������� ���� ������� ���� � ��������� ���� �������, 6.��������� �������� �����,[ ������� ���������� 7.�����, 
//8.��������� �� 9.����.10.������� ����  ������� ���� ����� ������ ��������� ���������� ���������, �� ���������.

#include<iostream>
#include <cmath>

using namespace std;

double IsNumber(string);

class Triangle
{
private:
    double side1;
    double side2;
    double side3;

public:

    Triangle();
    Triangle(double a, double b, double c);
    ~Triangle();
    double GetX();
    double GetY();
    double GetZ();

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

