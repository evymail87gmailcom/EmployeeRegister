#include <iostream>
#include <string>
#include"Header.h"
using namespace std;

int main() {


	Person* employeeOne = new Employee();
	Person* managerOne = new Manager();
	Person* consultantOne = new Consultant();
	
	employeeOne->input();
	employeeOne->output();
	managerOne->input();
	managerOne->output();
	consultantOne->input();
	consultantOne->output();
}