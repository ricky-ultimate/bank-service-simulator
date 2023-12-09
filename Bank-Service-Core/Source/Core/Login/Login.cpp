#include <iostream>
#include "Login.h"
#include "../../Functions/Functions.h"
#include "../BankAccount/BankAccount.h"

using namespace std;

namespace Functions{
     namespace login{
        void display(){
            std::cout << "LOGIN PAGE" << std::endl;
        }

        void displayMenu(){
            std::cout << "\n 1. Withdrawal" << std::endl;
    
        }

          void checkSelection(int selection) {
            if (selection < 1 || selection > 3) {
                exit(1);
            }
        }

        void logIn(){
            int accountNumber; std::cout << "ACCOUNT NUMBER:"; std::cin >> accountNumber;
            if (!accountNumber){
                exit(1);
            }

            refreshScreen();
        }

        void menuSelection(){
            display();
            logIn();
            int option = getSelection();
            checkSelection(option);

            switch (option)
            {
            case 1:
                BankAccount::withdraw(3000);
                break;
            
            default:
                break;
            }
        }
    }
}
