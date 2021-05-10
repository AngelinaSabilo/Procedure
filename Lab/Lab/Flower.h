#ifndef FLOWER_H
#define FLOWER_H

#include <fstream>
#include <string>
#include "Key.h"

using namespace std;

//��������� "������"
struct Flower {
    //��� ������
    enum Type {
        HOME,
        GARDEN,
        WILD
    };

    Type T; //��� ������
};

//������� ����� ������
void In_Flower(Flower& F, ifstream& ifst);

//������� ������ ������
void Out_Flower(string Name, Habitation H, Flower& F, ofstream& ofst);

#endif // FLOWER_H