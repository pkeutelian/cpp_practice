#include <iostream>
#include <limits>

int helloworld();
int Type_Conversions();
int FirstLast();
int String_Compare();
int letter_writing();

int main() {
    int on = 1;
    int choice = -1;

    while (on==1) {

        std::cout << "\n\n\nChoose test program: \n"
          << "    0) Exit Program.\n"
          << "<< Chapter 2 >>\n"
          << "    1) Hello World\n"
          << "<< Chapter 3 >>\n"
          << "    2) Type Conversions\n"
          << "    3) First-Last \n"
          << "    4) String_Compare\n"
          << "    5) Exercise: Letter Writing\n"
          << "\n\n"
          << "Choice then ENTER: > ";

        std::cin.clear();
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');

        std::cout << "\n\n";

        switch(choice) {
            case 0 : on = 0;
                     break;
            case 1 : helloworld();
                     break;
            case 2 : Type_Conversions();
                     break;
            case 3 : FirstLast();
                     break;
            case 4 : String_Compare();
                     break;
            case 5 : letter_writing();
                     break;
            default: std::cout << choice << " is not a valid choice.\n";

        }
    }
    return 0;
}
