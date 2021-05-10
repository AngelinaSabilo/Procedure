#include "Container.h"

void Init_Container(Container* Head) {
    Head->Cont = NULL;
    Head->Next = NULL;
    Head->Len = 0;
}

void In_Container(Container* Head, ifstream& ifst) {
    Container* Temp_Head = Head;
    int Len = 0;

    while (!ifst.eof()) {
        if ((Head->Cont = In_Plant(ifst))) {
            Head->Next = new Container();

            Head = Head->Next;
            Len++;
        }
    }

    while (Temp_Head->Cont != NULL) {
        Temp_Head->Len = Len;
        Temp_Head = Temp_Head->Next;
    }
}

void Out_Container(Container* Head, ofstream& ofst) {
    ofst << "Container contains " << Head->Len
        << " elements." << endl << endl;

    for (int i = 0; i < Head->Len; i++) {
        ofst << i << ": ";
        Out_Plant(Head->Cont, ofst);

        ofst << "Amount of consonant letters in the name of plant = " << 
            Plant_consonant_letters(Head->Cont) << endl << endl;

        Head = Head->Next;
    }
}

void Clear_Container(Container* Head) {
    for (int i = 0; i < Head->Len; i++) {
        Head->Len = 0;
        free(Head->Cont);
        Head = Head->Next;
    }
}

void Sort(Container* Head) {
    if (Head->Len > 1) {
        Container* First = Head;
        Container* Second = Head->Next;

        Container* Temp = new Container;

        while (First->Next && First->Next->Next) {
            while (Second && Second->Next) {
                if (Compare(First->Cont, Second->Cont)) {
                    Temp->Cont = First->Cont;
                    First->Cont = Second->Cont;
                    Second->Cont = Temp->Cont;
                }

                Second = Second->Next;
            }

            First = First->Next;
            Second = First->Next;
        }
    }
}

void Out_Only_Tree(Container* Head, ofstream& ofst) {
    ofst << "Only Trees." << endl << endl;

    Container* Temp_Head = Head;

    for (int i = 0; i < Head->Len; i++) {
        //Проверка того, что растение - дерево
        if (Temp_Head->Cont->K == TREE) {
            ofst << i << ": ";
            Out_Plant(Temp_Head->Cont, ofst);
        }

        Temp_Head = Temp_Head->Next;
    }
}