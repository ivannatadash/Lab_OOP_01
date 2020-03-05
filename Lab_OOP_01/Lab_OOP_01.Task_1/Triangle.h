
//1.Створити клас - трикутник. 2.У закритій частині описати поля: довжини сторін.3.Визначити конструктор,4. диструктор, 
//5.функції зміни значень полів і отримання їхніх значень, 6.виведення елементів класу,[ функції обчислення 7.площі, 
//8.периметру та 9.кутів.10.Функції зміни  значень полів класу повинні перевіряти коректність параметрів, що задаються.

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

