#include "Tree.h"

void In_Tree(Tree& T, ifstream& ifst) {
    ifst >> T.Age;
}

void Out_Tree(string Name, Tree& T, ofstream& ofst) {
    ofst << "It's a tree with name: " << Name << endl;
    ofst << "Tree's age is " << T.Age << endl << endl;
}