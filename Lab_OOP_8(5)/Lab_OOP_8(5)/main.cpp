#include <iostream>
#include <string>
#include "Strategy.h"
#include "Diplomant.h"
#include "Student.h"
#include "Winner.h"

using namespace std;

int Input(Strategy**, int&);
void Output(Student**, int);
void Sort(Strategy**, int);
void Sort(Student**, int);


int main()
{
    cout << "Enter amount of particirants: ";
    int amount;
    cin >> amount;
    Strategy** arr = new Strategy * [amount];
    if (arr == nullptr)
    {
        cout << "Memory error";
        exit(0);
    }
    amount = Input(arr, amount);
    Sort(arr, amount);
    Student** ar = 0;
    int st_amount = 0;

    for (int i = 0; i < amount; ++st_amount) {
        ar = (Student**)realloc(ar, (st_amount + 1) * sizeof(Student*));
        if (ar == NULL) {
            cout << "Memory error";
            return 0;
        }
        ar[st_amount] = new Student(*(arr[i]));
        while (ar[st_amount]->GetID() == arr[i]->GetID())
        {
            switch (arr[i]->GetRank())
            {
            case 1: ar[st_amount]->Increment1();
                break;
            case 2: ar[st_amount]->Increment2();
                break;
            case 3: ar[st_amount]->Increment3();
                break;
            }
            if (++i == amount) {
                break;
            }
        }
    }
    Sort(ar, st_amount);
    Output(ar, st_amount);
}

int Input(Strategy** arr, int& max_amount)
{
    int amount;
    for (amount = 0; amount < max_amount; ++amount) {
        cout << "Enter \"diplomant\" or \"winner\": ";
        string object;
        cin >> object;
        if (object == "0") {
            break;
        }
        cout << "Competition: ";
        string competition;
        cin >> competition;
        cout << "Name: ";
        string name;
        cin >> name;
        cout << "ID: ";
        int id;
        cin >> id;
        cout << "Rank: ";
        int rank;
        cin >> rank;
        if (object == "diplomant")
        {
            arr[amount] = new Diplomant(competition, name, id, rank);
            if (arr == nullptr)
            {
                cout << "Memory error";
                exit(0);
            }
        }
        else {
            cout << "Prize: ";
            string prize;
            cin >> prize;
            arr[amount] = new Winner(competition, name, id, rank, prize);
            if (arr == nullptr)
            {
                cout << "Memory error";
                exit(0);
            }
        }
    }
    if (amount < max_amount) {
        arr = (Strategy**)realloc(arr, amount * sizeof(Strategy*));
        if (arr == NULL)
        {
            cout << "Memory error";
            exit(0);
        }
    }
    return amount;
}

void Output(Student** arr, int amount)
{
    cout << '\n';
    cout.width(20);
    cout << "Student";
    cout << "\t\t1-st\t2-nd\t3-th\n";
    for (int i = 0; i < amount; i++) {
        cout.width(20);
        cout << arr[i]->GetName() << "\t\t";
        arr[i]->PrintRank();
    }
}

void Sort(Student** arr, int amount)
{
    for (int counter = 1; counter < amount; counter++)
    {
        Student* item = arr[counter];
        int number;

        for (number = counter - 1; (number >= 0) && ((*(arr + number))->Sum() < (*item).Sum()); number--) {
            arr[number + 1] = arr[number];
        }

        if (number != counter - 1) {
            arr[++number] = item;
        }
    }
}

void Sort(Strategy** arr, int amount)
{
    for (int counter = 1; counter < amount; counter++)
    {
        Strategy* item = arr[counter];
        int number;

        for (number = counter - 1; (number >= 0) && ((*(arr + number))->GetID() < (*item).GetID()); number--) {
            arr[number + 1] = arr[number];
        }

        if (number != counter - 1) {
            arr[++number] = item;
        }
    }
}