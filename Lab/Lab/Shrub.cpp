#include "Shrub.h"

void In_Shrub(Shrub& S, ifstream& ifst) {
    string Month = "";

    ifst >> Month;

    if (Month == "Jenuary") {
        S.M = S.JENUARY;
    }
    else if (Month == "February") {
        S.M = S.FEBRUARY;
    }
    else if (Month == "March") {
        S.M = S.MARCH;
    }
    else if (Month == "April") {
        S.M = S.APRIL;
    }
    else if (Month == "May") {
        S.M = S.MAY;
    }
    else if (Month == "June") {
        S.M = S.JUNE;
    }
    else if (Month == "July") {
        S.M = S.JULY;
    }
    else if (Month == "August") {
        S.M = S.AUGUST;
    }
    else if (Month == "September") {
        S.M = S.SEPTEMBER;
    }
    else if (Month == "October") {
        S.M = S.OCTOBER;
    }
    else if (Month == "November") {
        S.M = S.NOVEMBER;
    }
    else if (Month == "December") {
        S.M = S.DECEMBER;
    }
}

void Out_Shrub(string Name, Shrub& S, ofstream& ofst) {
    ofst << "It's a shrub with name: " << Name << endl;
    ofst << "Shrub's flowering month is ";

    if (S.M == S.JENUARY) {
        ofst << "Jenuary";
    }
    else if (S.M == S.FEBRUARY) {
        ofst << "February";
    }
    else if (S.M == S.MARCH) {
        ofst << "March";
    }
    else if (S.M == S.APRIL) {
        ofst << "April";
    }
    else if (S.M == S.MAY) {
        ofst << "May";
    }
    else if (S.M == S.JUNE) {
        ofst << "June";
    }
    else if (S.M == S.JULY) {
        ofst << "July";
    }
    else if (S.M == S.AUGUST) {
        ofst << "August";
    }
    else if (S.M == S.SEPTEMBER) {
        ofst << "September";
    }
    else if (S.M == S.OCTOBER) {
        ofst << "October";
    }
    else if (S.M == S.NOVEMBER) {
        ofst << "November";
    }
    else if (S.M == S.DECEMBER) {
        ofst << "December";
    }

    ofst << endl << endl;
}

int Shrub_consonant_letters(string Name) {
    string Constant_letter = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";

    int Amount = 0;

    for (int i = 0; i < Name.length(); i++) {
        for (int j = 0; j < Constant_letter.length(); j++) {
            if (Name[i] == Constant_letter[j]) {
                Amount++;
                break;
            }
        }
    }

    return Amount;
}