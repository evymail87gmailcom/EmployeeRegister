#include <iostream>
#include <string>
#include"Header.h"
using namespace std;

int main() {


	Person* employeeOne = new Employee();
	Person* managerOne = new Manager();
	Person* consultantOne = new Consultant();
	int input;
	do {

		cout << "Choose a role to enter: " << endl;
		cout << "Press 1 to register a new Employee. " << endl;
		cout << "Press 2 to register a new Manager." << endl;
		cout << "Press 3 to register a new Consultant. " << endl;
		cin >> input;
		system("cls");
		switch (input) {

		case 1: {
			employeeOne->input();
			system("cls");
			employeeOne->output();
			break;
		}
		case 2: {
			managerOne->input();
			system("cls");
			managerOne->output();
			break;
		}
		case 3: {
			consultantOne->input();
			system("cls");
			consultantOne->output();
		}
		default:
			break;
		}
	} while (input != 0);


}