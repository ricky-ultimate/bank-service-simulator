#include <iostream>
#include <cstdlib>
#include "../../Bank-Service-Core/Source/Functions/Functions.h"
#include "../../Bank-Service-Core/Source/Display/Display.h"
#include "../../Bank-Service-Core/Source/Core/BankAccount/BankAccount.h"

using namespace std;

int main(){
	StartUp();
	int option = 0;
	std::cin >> option;

	menuSelection(option);
}