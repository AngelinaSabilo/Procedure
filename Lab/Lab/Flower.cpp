#include "Flower.h"

void In_Flower(Flower& F, ifstream& ifst) {
    string Type = "";

    ifst >> Type;

    if (Type == "Home") {
        F.T = F.HOME;
    }
    else if (Type == "Garden") {
        F.T = F.GARDEN;
    }
    else if (Type == "Wild") {
        F.T = F.WILD;
    }
}

void Out_Flower(string Name, Habitation H, Flower& F, ofstream& ofst) {
    ofst << "It's a flower with name: " << Name << endl;
    ofst << "Flower's type is ";

    if (F.T == F.HOME) {
        ofst << "Home";
    }
    else if (F.T == F.GARDEN) {
        ofst << "Garden";
    }
    else if (F.T == F.WILD) {
        ofst << "Wild";
    }

    ofst << endl;

    ofst << "Flower's habitation is ";

    if (H == TUNDRA) {
        ofst << "Tundra";
    }
    else if (H == DESERT) {
        ofst << "Desert";
    }
    else if (H == STEPPE) {
        ofst << "Steppe";
    }
    else if (H == TAIGA) {
        ofst << "Taiga";
    }

    ofst << endl << endl;
}