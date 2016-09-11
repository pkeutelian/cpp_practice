#include <iostream>

int helloworld();
int Type_Conversions();
int FirstLast();
int String_Compare();

int main() {

    std::cout << "Choose test program: \n"
      << "    0) Exit Program.\n"
      << "    1) Hello World\n"
      << "    2) Type Conversions\n"
      << "    3) First-Last \n"
      << "    4) String_Compare\n"
      << "Choice then ENTER: > ";
    int choice = -1;
    std::cin >> choice;

    switch(choice) {
        case 0 : break;
        case 1 : helloworld();
                 break;
        case 2 : Type_Conversions();
                 break;
        case 3 : FirstLast();
                 break;
        case 4 : String_Compare();
                 break;
        default: std::cout << "Not a valid choice\n";

    }
    return 0;
}
