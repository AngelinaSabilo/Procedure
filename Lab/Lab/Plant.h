#ifndef PLANT_H
#define PLANT_H

#include "Key.h"
#include "Tree.h"
#include "Shrub.h"
#include "Flower.h"

//��������� "��������"
struct Plant {
    Key K; //������������� ��������
    string Name; //�������� ��������

    //������ ��������
    union {
        Tree T;
        Shrub S;
        Flower F;
    };

    Habitation H; //����� ��������
};

//������� ����� ��������
Plant* In_Plant(ifstream& ifst);

//������� ������ ��������
void Out_Plant(Plant* P, ofstream& ofst);

//������� �������� ����� ��������� ���� � �������� ��������
int Plant_consonant_letters(Plant* P);

//������� ��������� ����� ��������� ���� � ��������� �������� 
bool Compare(Plant* First, Plant* Second);

#endif // PLANT_H