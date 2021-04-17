#ifndef PLANT_H
#define PLANT_H

#include "Key.h"
#include "Tree.h"
#include "Shrub.h"

//Структура "растение"
struct Plant {
    Key K; //Идентификатор растения
    string Name; //Название растения

    //Объект растения
    union {
        Tree T;
        Shrub S;
    };
};

//Функция ввода растения
Plant* In_Plant(ifstream& ifst);

//Функция вывода растения
void Out_Plant(Plant* P, ofstream& ofst);

#endif // PLANT_H