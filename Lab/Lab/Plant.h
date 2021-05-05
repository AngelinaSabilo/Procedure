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
};

//������� ����� ��������
Plant* In_Plant(ifstream& ifst);

//������� ������ ��������
void Out_Plant(Plant* P, ofstream& ofst);

#endif // PLANT_H