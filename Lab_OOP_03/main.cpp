#include <iostream>
#include "Triangle.h"
#include <cmath>

using namespace std;

void Sort(Triangle*, int);
void Input(Triangle*, int);
void Output(Triangle*, int, const char*);
double EnterNumber();
bool IsSorted(Triangle*, int);
double IsNumber(string str);
Triangle& MinByP(Triangle*, int);

int main()
{
    cout << "Enter amount of triangls: ";
    int amount;
    cin >> amount;
    Triangle* arr = new Triangle[amount];

    Input(arr, amount);
    Output(arr, amount, "Input data\n");
    Sort(arr, amount);
    Output(arr, amount, "Sorted by square data\n");

    double plus = EnterNumber();
    *arr += plus;

    Output(arr, amount, "Data\n");

    if (IsSorted(arr, amount))
        cout << "\nArray is sorted at the moment\n";
    else
        cout << "\nArray is not sorted at the moment\n";

    delete[] arr;
    return 0;
}

void Sort(Triangle*arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        Triangle x = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < x)
            {
                k = j;
                x = arr[k];
            }
        }
        arr[k] = arr[i];
        arr[i] = x;
    }
}

void Input(Triangle*arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << '\n' << i + 1 << " Triangle";
        cin >> *(arr + i);
    }
}

void Output(Triangle*arr, int n, const char* sentence)
{ 
    cout << "\n\n" << sentence << '\n';
    for (int i = 0; i < n; i++)
        cout << *(arr + i);
}

double EnterNumber()
{
    cout << "\nEnter number: ";
    string check;
    cin >> check;
    double number = IsNumber(check);
    while (!number)
    {
        cout << "\nEnter number: ";
        double plus = IsNumber(check);
        cin >> check;
    }
    return number;
}

bool IsSorted(Triangle* arr, int n)
{
    for (Triangle* p = arr; p < arr + n - 1; p++)
        if (p->Square() > (p + 1)->Square())
            return false;
    return true;
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
            number += base * (  *p - '0');
    return number;
}

Triangle& MinByP(Triangle*arr, int n )
{
    Triangle* min = arr;
    for (Triangle* p = arr + 1; p < arr + n; p++)
        if (p->Perimeter() < min->Perimeter())
            min = p;
    return *min;
}
