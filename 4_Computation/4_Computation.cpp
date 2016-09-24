// Loops and Sorts
// Paul Keutelian
// Chapter 4 exercise

#include "std_lib_facilities.h"


void loops_sorts() {

    cout << "Enter a set of numbers, '|' to end.: ";

    double slot1 = 0;
    double slot2 = 0;
    double smaller = 0;
    double larger = 0;

    while (cin >> slot1 >> slot2) {

        cout << "Entered: " << slot1 << " " << slot2 << "\n";

        if (slot1 < slot2) {
            smaller = slot1;
            larger = slot2;
            cout << "The smaller value is: " << smaller
                 << ".\nThe larger value is: " << larger
                 << ".\n";
        }
        else if (slot1 > slot2){
            smaller = slot2;
            larger = slot1;
            cout << "The smaller value is: " << smaller
                 << ".\nThe larger value is: " << larger
                 << ".\n";
        }
        else if (slot1 == slot2)
            cout << "The numbers are equal.\n";
        else
            cout << "Corner case\n";               
    
    }
}
