#include <iostream> 
#include <string> 
#include "Institute.h"
#include "InstituteIterator.h"
#include "Student.h"

using namespace std;

int main(int argc, char** argv)
{

    Institute cs("Computer Science and Information Technology\n");

    cs.add("1.Anstushchyshyn Nazar");
    cs.add("2.Bas Igor");
    cs.add("3.Bilyi Severyn");
    cs.add("4.Bryshata Vitalia");
    cs.add("5.Valkova Tetjana");
    cs.add("6.Duban Pavlo");
    cs.add("7.Dumych Evgen");
    cs.add("8.Zacharkevych Maxym");
    cs.add("9.Kvintiuk Nastia");
    cs.add("10.Kozak Ivan");
    cs.add("11.Konjuchova Viktoria");
    cs.add("12.Kornyliv Volodymyr");
    cs.add("13.Kostiv Andriy");
    cs.add("14.Kotenska Anastasia");
    cs.add("15.Kryshchuk Sofia");
    cs.add("16.Lavrynenko Danylo");
    cs.add("17.Lopotjak Marjana");
    cs.add("18.Marushchak Maksym");
    cs.add("19.Melnychenko Volodymyr");
    cs.add("20.Mykytjuk Vladyslav");
    cs.add("21.Olijnyk Artem");
    cs.add("22.Protsuk Maksym");
    cs.add("23.Senyk Taras");
    cs.add("24.Sereda Vitaliy");
    cs.add("25.Skyba Danil");
    cs.add("26.Slobodeniuk Nazar");
    cs.add("27.Stetsko Bozhena");
    cs.add("28.Tadash Ivanna");
    cs.add("29.Tkachuk Oleksandr");
    cs.add("30.Fomenko Nadia");


    InstituteIterator iterator(cs);

    while (iterator())
    {
        cout << *iterator << endl;
        iterator++;
    }

    return 0;

}