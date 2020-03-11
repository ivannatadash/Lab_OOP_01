#include "Triangle1.h"

int main()
{
    Triangle1* obj1 = new Triangle1(2.1, 3.6, 5.4);
    obj1->Print();

    Triangle1 obj2;
    obj2.Print();
    obj2.SetX(12.67);
    obj2.SetY(5.14);
    obj2.SetZ(8.46);

    cout << "Sides: " << obj2.GetX() << ", " << obj2.GetY() << ", " << obj2.GetZ() << endl;

    Triangle1 obj4(*obj1);
    cout << "Sides: " << obj2.GetSide(1) << ", " << obj2.GetSide(2) << ", " << obj2.GetSide(3) << endl;

    cout << "Enter sides of triangle.\n";

    string value;
    cout << "1. ";
    cin >> value;
    while (obj2.SetX(value))
    {
        cout << "1. ";
        cin >> value;
    }

    cout << "2. ";
    cin >> value;
    while (obj2.SetY(value))
    {
        cout << "2. ";
        cin >> value;
    }

    cout << "3. ";
    cin >> value;
    while (obj2.SetZ(value))
    {
        cout << "3. ";
        cin >> value;
    }

    cout << "Perimeter: " << obj2.Perimeter() << endl;
    cout << "Square: " << obj2.Square() << endl;
    cout << "Angle a: " << obj2.Angle(obj2.GetX(), obj2.GetY(), obj2.GetZ()) << endl;
    cout << "Angle b: " << obj2.Angle(obj2.GetX(), obj2.GetZ(), obj2.GetY()) << endl;
    cout << "Angle c: " << obj2.Angle(obj2.GetZ(), obj2.GetY(), obj2.GetX()) << endl;

    delete obj1;
    return 0;
}

double IsNumber(string str)
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