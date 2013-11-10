/*
 ============================================================================
 Name        : fourthAssignment.cpp
 Author      : grosalex
 Version     :
 Copyright   : do what you want with it
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include "HospitalManager.h"
using namespace std;

int main(void) {
	char choice=' ';
	char createChoice=' ';
	bool check=false;
	int i=0;
	int index;
	HospitalManager myManager;
	/*
1 - add employee

2 - delete employee : ask for employee id, remove from employee id

3 - add patient :
	- ask for physician (display all physicians)
	- ask for bed number (corresponding to index in bedarray)
4 - delete patient (discharge patient) :
	- ask for patient id, remove from patient array
	- move to discharged patient

5 - print physicians()
6 - print my patient (sending physician id parameter)
7 - print earnings (int employeeid)*/
	do{
		cout << "1 - Add employee" << endl;
		cout << "2 - Delete employee" << endl;
		cout << "3 - Add Patient" << endl;
		cout << "4 - Discharge patient" << endl;
		cout << "5 - Print physicians" << endl;
		cout << "6 - Print patient's physicians" << endl;
		cout << "7 - Print employee earnings" << endl;
		cout << "q - To quit" << endl;
		cin >> choice;
		switch(choice){
		case '1':
				cout << "To add a nurse enter n. To add a staff enter s. to add a physician enter p.";
				cin >> createChoice;
				switch(createChoice){
				case'n':
					check=myManager.add_employee(new Nurses());
					break;
				case's':
					check=myManager.add_employee(new Staff());
					break;
				case'p':
					check=myManager.add_employee(new Physicians());
					break;
				}
				if(check){
					cout << "Employee correctly added"<< endl;
				}
				else{
					cout << "Couldn't added the employee" << endl;
				}
				createChoice=' ';
			break;
		case '2':
			for(i=0;i<myManager.getMaxperson();i++){
				myManager.print(i);
				cout << endl << "which employee do you want to delete (by his employee id) : ";
				cin >> index;
				check=myManager.remove(index);
				if(check){
					cout << endl << "employee successfully removed" << endl;
				}
				else{
					cout << endl << "failed to remove employee" << endl;
				}
			}
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			myManager.print_physicians();
			break;
		case '6':
			myManager.print_physicians();
			cout << endl << "Which physician's patient do you want to print?(enter his employee id)";
			cin >> index;
			myManager.print_mypatients(index);
			break;
		case '7':
			break;
		default:
			break;
		}
	}while(choice!='q');
	return 0;
}
