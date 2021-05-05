#include "Tree.h"

void In_Tree(Tree& T, ifstream& ifst) {
    ifst >> T.Age;
}

void Out_Tree(string Name, Habitation H, Tree& T, ofstream& ofst) {
    ofst << "It's a tree with name: " << Name << endl;
    ofst << "Tree's age is " << T.Age << endl;
    ofst << "Tree's habitation is ";

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