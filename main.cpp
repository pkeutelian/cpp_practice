#include <iostream>

int helloworld();

int main() {

    std::cout << "Choose test program: \n"
      << "    0) Exit Program.\n"
      << "    1) Hello World\n"
      << "Choice then ENTER: > ";
    int choice = -1;
    std::cin >> choice;

    switch(choice) {
        case 0 : break;
        case 1 : helloworld();
                 break;
        default: std::cout << "Not a valid choice\n";

    }
    return 0;
}
