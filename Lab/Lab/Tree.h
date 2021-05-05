#ifndef TREE_H
#define TREE_H

#include <fstream>
#include <string>

using namespace std;

//Структура "дерево"
struct Tree {
    long int Age; //Возраст дерева
};

//Функция ввода дерева
void In_Tree(Tree& T, ifstream& ifst);

//Функция вывода дерева
void Out_Tree(string Name, Tree& T, ofstream& ofst);

//Функция подсчета числа согласных букв в названии дерева
int Tree_consonant_letters(string Name);

#endif // TREE_H