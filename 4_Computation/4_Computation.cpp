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
    string units = "";
    double smaller = std::numeric_limits<double>::max();    // Start high enough to trigger.
    double larger = std::numeric_limits<double>::min();     // Start low enough to trigger.

    const int m_to_cm = 100;
    const double in_to_cm = 2.54;
    const int ft_to_in = 12;

    while (cin >> slot1 >> units) {

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
