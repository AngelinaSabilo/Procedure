#include "Plant.h"

Plant* In_Plant(ifstream& ifst) {
    Plant* P = NULL;
    int K;

    ifst >> K;

    if (K == 1) {
        P = new Plant;
        P->K = TREE;

        ifst >> P->Name;

        In_Tree(P->T, ifst);
    }
    else if (K == 2) {
        P = new Plant;
        P->K = SHRUB;

        ifst >> P->Name;

        In_Shrub(P->S, ifst);
    }
    else if (K == 3) {
        P = new Plant;
        P->K = FLOWER;

        ifst >> P->Name;

        In_Flower(P->F, ifst);
    }

    return P;
}

void Out_Plant(Plant* P, ofstream& ofst) {
    if (P->K == TREE) {
        Out_Tree(P->Name, P->T, ofst);
    }
    else if (P->K == SHRUB) {
        Out_Shrub(P->Name, P->S, ofst);
    }
    else if (P->K == FLOWER) {
        Out_Flower(P->Name, P->F, ofst);
    }
    else {
        ofst << "Incorrect element!" << endl << endl;
    }
}

int Plant_consonant_letters(Plant* P) {
    if (P->K == TREE || P->K == SHRUB || P->K == FLOWER) {
        string Constant_letter = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";

        int Amount = 0;

        for (int i = 0; i < P->Name.length(); i++) {
            for (int j = 0; j < Constant_letter.length(); j++) {
                if (P->Name[i] == Constant_letter[j]) {
                    Amount++;
                    break;
                }
            }
        }

        return Amount;
    }
    else {
        return -1;
    }
}

bool Compare(Plant* First, Plant* Second) {
    return Plant_consonant_letters(First) > Plant_consonant_letters(Second);
}