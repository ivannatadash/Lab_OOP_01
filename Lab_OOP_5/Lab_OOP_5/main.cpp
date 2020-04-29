#include <iostream>
#include <stdlib.h>

#include "Advertising.h"
#include "AdvertisingTV.h"
#include "AdvertisingBB.h"
#include "AdvertisingYT.h"
#include "AdvertisingPT.h"


using namespace std;

double Result();

void Sort(Advertising** array, int size)

{
    Advertising* temp;

    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (array[j]->Result() < array[j + 1]->Result()) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}

int main(void)
{
    const int size = 8;
    Advertising** array = new Advertising * [size];
    array[0] = new AdvertisingTV("Vodafon", "New tariff plan", "Ukraine", 15, 35, 5000);
    array[1] = new AdvertisingTV("Kyivstar", "New tariff plan", "Ukraine", 16, 35, 4000);
    array[2] = new AdvertisingBB("Silpo", "ACTION", "Sychivska 11", 6, 3, 7, 11);
    array[3] = new AdvertisingBB("Arsen", "ACTION", "Chervona Kalyna 81", 6, 3, 7, 36);
    array[4] = new AdvertisingYT("German online school", "New academic season", 90, 40, 1000);
    array[5] = new AdvertisingYT("English online school", "New academic season", 120, 50, 1500);
    array[6] = new AdvertisingPT("Watsons", "SALE", "Sychivska 28", 2, 1, 7, 500);
    array[7] = new AdvertisingPT("Prostor", "SALE", "Dragana 23", 2, 1, 7, 550);

    Sort(array, size);

    cout << "\n" << "Order value in descending order:" << "\n";
    for (int i = 0; i < size; i++) {
        array[i]->Print();
        cout << "Value: " << array[i]->Result() << endl;
    }

    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += array[i]->Result();
    }

    cout << "  The price of advertisings per week:" << result << "\n\n";

    system("pause");
    return 0;
}
  