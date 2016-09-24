// Loops and Sorts
// Paul Keutelian
// Chapter 4 exercise

#include "std_lib_facilities.h"

int loops_sorts() {

    cout << "Enter a set of numbers, '|' to end.: ";

    int slot1 = 0;
    int slot2 = 0;                    //  Drill Step 1

    while (cin >> slot1 >> slot2) {
        if (slot1 == '|' || slot2 == '|')
            break;
        else
            cout << slot1 << ' ' << slot2 << '\n';
    
    }
    return 0;

}
