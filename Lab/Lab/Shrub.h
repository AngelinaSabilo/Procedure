#ifndef SHRUB_H
#define SHRUB_H

#include <fstream>
#include <string>
#include "Key.h"

using namespace std;

//Структура "кустарник"
struct Shrub {
    //Месяц цветения
    enum Month {
        JENUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };

    Month M; //Месяц цветения
};

//Функция ввода кустарника
void In_Shrub(Shrub& S, ifstream& ifst);

//Функция вывода кустарника
void Out_Shrub(string Name, Habitation H, Shrub& S, ofstream& ofst);

#endif // SHRUB_H