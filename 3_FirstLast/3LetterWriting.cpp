
// This drill is to write a program that produces a simple form letter based on user input.
#include "std_lib_facilities.h"

int letter_writing()
{
    // Step 1, get user's name and recipients name. Code from 3.1.
    
    cout << "Enter your first name (followed by 'enter'):\n";
	string user_name;		// first_name is a variable of type string
	cin >> user_name;		// read characters into first_name
	cout << "Hello, " << user_name << "!\n";
    
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name;		// first_name is a variable of type string
	cin >> first_name;		// read characters into first_name
	cout << "Dear " << first_name << ",\n";
	
	// 2. Add an introductory line or two:
	cout << "    How are you? I am fine. I miss you.\n";
	
    // 3. get friend's name. Code from 3.1.
    cout << "Enter the name of a friend (followed by 'enter'):\n";
	string friend_name;		// friend_name is a variable of type string
	cin >> friend_name;		// read characters into friend_name
	cout << "Have you seen " << friend_name << " lately?\n";
	
	// 4. Get the friend's gender
    cout << "Input this friend's gender ('m' or 'f' only):\n";
	char friend_sex {0};	// first_name is a variable of type string
	cin >> friend_sex;		// read characters into first_name''''
	
	string friend_pronoun;  // create a pronount based on the gender.
	
	if (friend_sex == 'm') {
	    friend_pronoun = "him";
	}
	if (friend_sex == 'f') {
	    friend_pronoun = "her";
	}
    cout << "If you see " << friend_name << " please ask " << friend_pronoun << " to call me.\n";

	// 5. Prompt user for age of recipient.
	int age {0};
	cout << "Enter the age of recipient: ";
	cin >> age;
	
	if ((age < 0) || (age >= 110))
	    simple_error("you're kidding!");
	
	if (age < 12)
	    cout << "Next year you will be " << age+1 << ".\n";
	
	if (age == 17)
	    cout << "Next year you will be able to vote.\n";
	    
	if (age > 70)
	    cout << "I hope you are enjoying retirement.\n";
	
	
	cout << "Yours sincerely,\n\n\n" << user_name << ".\n";
	
    return 0;
}
