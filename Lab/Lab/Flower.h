#ifndef FLOWER_H
#define FLOWER_H

#include <fstream>
#include <string>
#include "Key.h"

using namespace std;

//Структура "цветок"
struct Flower {
    //Тип цветка
    enum Type {
        HOME,
        GARDEN,
        WILD
    };

    Type T; //Тип цветка
};

//Функция ввода цветка
void In_Flower(Flower& F, ifstream& ifst);

//Функция вывода цветка
void Out_Flower(string Name, Habitation H, Flower& F, ofstream& ofst);

#endif // FLOWER_H