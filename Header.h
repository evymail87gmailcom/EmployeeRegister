#include <iostream>
#include <string>
using namespace std;
#pragma once

class Person {
protected:
	string name;
	long long int personalId;
public:
	Person() {
		name = "";
		personalId = 0;
	}

	Person(string nameIn, long long int personalIdIn) :Person() {
		name = nameIn;
		personalId = personalIdIn;
	}
	virtual void input() = 0;
	virtual void output() = 0;
};



/*Klass för anställda i allmännhet
Innehåller utöver ärvda egenskaper även:
anställningsdatum,anställningsnummer, lön, avdelning,*/
class Employee :public Person {
protected:
	int employementDate;
	int employementNumber;
	int salary;
	int department;
public:

	Employee() :Person() {
		name = "";
		personalId = 0;
		employementDate = 0;
		employementNumber = 0;
		salary = 0;
		department = 0;

	}
	Employee(string nameIn, long long int personalIdIn, int employementDateIn, int employementNumberIn, int salaryIn, int departmentIn) :Person() {
		name = nameIn;
		personalId = personalIdIn;
		employementDate = employementDateIn;
		employementNumber = employementNumberIn;
		salary = salaryIn;
		department = departmentIn;
	}
	void input() {
		cout << "Enter Name: " << endl;
		cin >> name;
		cout << "Enter personalNumber: " << endl;
		cin >> personalId;
		cout << "Enter Date of employment: " << endl;
		cin >> employementDate;
		cout << "Enter employmentNumber: " << endl;
		cin >> employementNumber;
		cout << "Enter salary: " << endl;
		cin >> salary;
		cout << "Enter departmentNumber: " << endl;
		cin >> department;
	}
	void output() {
		cout << "-----------------------------------------------------------------" << endl;
		cout << "" << endl;
		cout << "Name:\t\t\t " << name << endl;
		cout << "PersonalId:\t\t " << personalId << endl;
		cout << "Date of employment:\t " << employementDate << endl;
		cout << "Employmentnumber:\t " << employementNumber << endl;
		cout << "Salary:\t\t\t " << salary << endl;
		cout << "Current department:\t " << department << endl;
		cout << "" << endl;
		cout << "-----------------------------------------------------------------" << endl;
	}



};


/*Klass för avdelningschefer som utöver arv från employeeklassen också innehåller:
befattning. Alternativt lägga till befattning i employeeklassen*/
class Manager :public Employee {
protected:
	string position;
public:
	Manager() {
		name = "";
		personalId = 0;
		employementDate = 0;
		employementNumber = 0;
		salary = 0;
		department = 0;
		position = "";
	}
	
	Manager(string positionIn, string nameIn, long long int personalIdIn, int employementDateIn, int employementNumberIn, int salaryIn, int departmentIn) {
		position = positionIn;
		name = nameIn;
		personalId = personalIdIn;
		employementDate = employementDateIn;
		employementNumber = employementNumberIn;
		salary = salaryIn;
		department = departmentIn;
	}
	void input() {
		cout << "Enter Name: " << endl;
		cin >> name;
		cout << "Enter personalNumber: " << endl;
		cin >> personalId;
		cout << "Enter Date of employment: " << endl;
		cin >> employementDate;
		cout << "Enter employmentNumber: " << endl;
		cin >> employementNumber;
		cout << "Enter salary: " << endl;
		cin >> salary;
		cout << "Enter departmentNumber: " << endl;
		cin >> department;
		cout << "Enter position: " << endl;
		cin >> position;
	}
	void output() {
		cout << "-----------------------------------------------------------------" << endl;
		cout << "" << endl;
		cout << "Name:\t\t\t " << name << endl;
		cout << "Current position:\t " << position << endl;
		cout << "PersonalId:\t\t " << personalId << endl;
		cout << "Date of employment:\t " << employementDate << endl;
		cout << "Employmentnumber:\t " << employementNumber << endl;
		cout << "Salary:\t\t\t " << salary << endl;
		cout << "Current department:\t " << department << endl;
		cout << "" << endl;
		cout << "-----------------------------------------------------------------" << endl;
	}

};
class Consultant : public Manager {
protected:
	string consultantAgency;
public:
	Consultant() {
		name = "";
		personalId = 0;
		employementDate = 0;
		employementNumber = 0;
		salary = 0;
		department = 0;
		position = "";
		consultantAgency = "";
	}
	
	Consultant(string positionIn, string consultantAgencyIn, string nameIn, long long int personalIdIn, int employementDateIn, int employementNumberIn, int salaryIn, int departmentIn) {
		position = positionIn;
		name = nameIn;
		consultantAgency = consultantAgencyIn;
		personalId = personalIdIn;
		employementDate = employementDateIn;
		employementNumber = employementNumberIn;
		salary = salaryIn;
		department = departmentIn;
	}
	void input() {
		cout << "Enter Name: " << endl;
		cin >> name;
		cout << "Enter consultantAgency: " << endl;
		cin >> consultantAgency;
		cout << "Enter personalNumber: " << endl;
		cin >> personalId;
		cout << "Enter Date of employment: " << endl;
		cin >> employementDate;
		cout << "Enter employmentNumber: " << endl;
		cin >> employementNumber;
		cout << "Enter salary: " << endl;
		cin >> salary;
		cout << "Enter departmentNumber: " << endl;
		cin >> department;
		cout << "Enter position: " << endl;
		cin >> position;
	}
	void output() {
		cout << "-----------------------------------------------------------------" << endl;
		cout << "" << endl;
		cout << "Name:\t\t\t " << name << endl;
		cout << "ConsultantAgency:\t " << consultantAgency << endl;
		cout << "Current position:\t " << position << endl;
		cout << "PersonalId:\t\t " << personalId << endl;
		cout << "Date of employment:\t " << employementDate << endl;
		cout << "Employmentnumber:\t " << employementNumber << endl;
		cout << "Salary:\t\t\t " << salary << endl;
		cout << "Current department:\t " << department << endl;
		cout << "" << endl;
		cout << "-----------------------------------------------------------------" << endl;
	}
};
