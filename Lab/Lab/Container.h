#ifndef CONTAINER_H
#define CONTAINER_H

#include "Plant.h"

//Структура "контейнер"
struct Container {
    Container* Next; //Указатель на следующий элемент контейнера
    Plant* Cont; //Указатель на растение
    int Len; //Разменость контейнера
};

//Функция инициализации контейнера
void Init_Container(Container* Head);

//Функция ввода элементов в контейнер
void In_Container(Container* Head, ifstream& ifst);

//Функция вывода контейнера
void Out_Container(Container* Head, ofstream& ofst);

//Функция очистки контейнера
void Clear_Container(Container* Head);

//Функция сортировки контейнера
void Sort(Container* Head);

//Функция вывода только деревьев
void Out_Only_Tree(Container* Head, ofstream& ofst);

#endif // HEADER_H