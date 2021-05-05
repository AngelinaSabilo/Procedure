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

    return P;
}

void Out_Plant(Plant* P, ofstream& ofst) {
    if (P->K == TREE) {
        Out_Tree(P->Name, P->T, ofst);
    }
    else if (P->K == SHRUB) {
        Out_Shrub(P->Name, P->S, ofst);
    }
    else {
        ofst << "Incorrect element!" << endl << endl;
    }
}

int Plant_consonant_letters(Plant* P) {
    if (P->K == TREE) {
        return Tree_consonant_letters(P->Name);
    }
    else if (P->K == SHRUB) {
        return Shrub_consonant_letters(P->Name);
    }
    else {
        return -1;
    }
}

bool Compare(Plant* First, Plant* Second) {
    return Plant_consonant_letters(First) > Plant_consonant_letters(Second);
}