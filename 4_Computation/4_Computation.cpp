// Loops and Sorts
// Paul Keutelian
// Chapter 4 exercise

#include "std_lib_facilities.h"
#include <limits>
#include <cstddef>
#include <iostream>


void loops_sorts() {

    cout << "Enter a set of numbers, '|' to end.: ";

    double slot1 = 0;
    double smaller = std::numeric_limits<double>::max();    // Start high enough to trigger.
    double larger = std::numeric_limits<double>::min();     // Start low enough to trigger.

    while (cin >> slot1) {

        cout << "Entered: " << slot1 << ".\n";

        if (slot1 < smaller) {
            smaller = slot1;
            cout << smaller << ", the smallest so far.\n ";
        }
        else if (slot1 > larger) {
            larger = slot1;
            cout << larger << ", the largest so far.\n ";
        }    
    }
}
