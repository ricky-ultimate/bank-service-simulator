#include <iostream>
#include "Functions.h"

using namespace std;

namespace Functions{
    namespace login{
        void display();
        void logIn();
        void menuSelection();
    }

    namespace signup{
        void display();
        //void menuSelection();
    }
}

void refreshScreen() {
    system("cls");
    cin.clear();
}

void menuSelection(int option){
    if (option < 1 || option > 2){
         exit(1);
    }

        refreshScreen();

    switch(option)
    {
        case 1:
            Functions::login::menuSelection();
            break;

        case 2:
            Functions::signup::display();
            //Functions::signup::menuSelection();
            break;

        default:
            Functions::login::display();
            //Functions::login::menuSelection();
            break;
    }
    
}

int getSelection() {
    int selection;
    std::cout << "What would you like to do today? \n 1. Withdraw? \n 2. Some other option";
    std::cin >> selection;
    return selection;
}

    