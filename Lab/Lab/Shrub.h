#ifndef SHRUB_H
#define SHRUB_H

#include <fstream>
#include <string>
#include "Key.h"

using namespace std;

//��������� "���������"
struct Shrub {
    //����� ��������
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

    Month M; //����� ��������
};

//������� ����� ����������
void In_Shrub(Shrub& S, ifstream& ifst);

//������� ������ ����������
void Out_Shrub(string Name, Habitation H, Shrub& S, ofstream& ofst);

#endif // SHRUB_H