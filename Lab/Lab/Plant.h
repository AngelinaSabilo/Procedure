#ifndef PLANT_H
#define PLANT_H

#include "Key.h"
#include "Tree.h"
#include "Shrub.h"
#include "Flower.h"

//Структура "растение"
struct Plant {
    Key K; //Идентификатор растения
    string Name; //Название растения

    //Объект растения
    union {
        Tree T;
        Shrub S;
        Flower F;
    };

    Habitation H; //Среда обитания
};

//Функция ввода растения
Plant* In_Plant(ifstream& ifst);

//Функция вывода растения
void Out_Plant(Plant* P, ofstream& ofst);

//Функция подсчета числа согласных букв в названии растения
int Plant_consonant_letters(Plant* P);

//Функция сравнения числа согласных букв в названиях растений 
bool Compare(Plant* First, Plant* Second);

#endif // PLANT_H