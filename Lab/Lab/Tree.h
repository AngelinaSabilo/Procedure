#ifndef TREE_H
#define TREE_H

#include <fstream>
#include <string>
#include "Key.h"

using namespace std;

//Структура "дерево"
struct Tree {
    long int Age; //Возраст дерева
};

//Функция ввода дерева
void In_Tree(Tree& T, ifstream& ifst);

//Функция вывода дерева
void Out_Tree(string Name, Habitation H, Tree& T, ofstream& ofst);

#endif // TREE_H