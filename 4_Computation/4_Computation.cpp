/* Loops and Sorts
 * Paul Keutelian
 * Chapter 4 exercise
 * Step 7
 */

#include "std_lib_facilities.h"
#include <limits>
#include <cstddef>
#include <iostream>

double determine_conversion(string units_entered)
{
	constexpr int m_to_cm = 100;
	constexpr double in_to_cm = 2.54;
	constexpr int ft_to_in = 12;
	double conversion_factor = 0.0;
	
	// switch to if-statements, no switch on string
	if (units_entered == "m")
		conversion_factor = 1.0;
	else if (units_entered == "cm")
		conversion_factor = 1/m_to_cm;
	else if (units_entered == "in")
		conversion_factor = in_to_cm / m_to_cm;
	else if (units_entered == "ft")
		conversion_factor = ft_to_in * in_to_cm / m_to_cm;
	else
		conversion_factor = 0.0;
	return conversion_factor;
}

void loops_sorts()
{

	cout << "Enter a set of numbers with units, 'm', 'cm', 'in', 'ft' "
		<< " accepted. '|' to end.: ";

	double slot1 = 0.0;
	string units_entered = "";
	string smaller_units = "m";
	string larger_units = "m";
	double smaller = std::numeric_limits<double>::max();	// Start high
								// enough to
								// trigger.
								
	double larger = std::numeric_limits<double>::min();	// Start low
    								// enough to
    								// trigger.
	double smaller_converted = smaller;
	double larger_converted = larger;
	double conversion_factor = 1.0;

	double temp = 0.0;	// Placeholder for consistent units.
	string temp_units = "m";

	while (cin >> slot1 >> units_entered) {

		/* Standard sub checks for a unit, converts it to meters, then
		 * compares that value with the stored max and min, then stores
		 * the new value if it's bounding.
		 */
		 
		cout << "Entered: " << slot1 << " " << units_entered << ".\n";
		
		conversion_factor = determine_conversion(units_entered);
		temp = slot1 * conversion_factor;
		
		if (temp < smaller_converted) {
			smaller = slot1;
			smaller_units = units_entered;
			smaller_converted = 
				smaller/determine_conversion(smaller_units);
			cout << smaller << " " << smaller_units
				<< ", the smallest so far.\n ";
		} else if (temp > larger_converted) {
			larger = slot1;
			larger_units = units_entered;
			larger_converted = 
				larger/determine_conversion(larger_units);
			cout << larger << " " << larger_units
				<< ", the largest so far.\n ";
		}
	}
}
