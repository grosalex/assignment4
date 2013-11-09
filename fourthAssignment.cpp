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

using namespace std;

int main(void) {
	/*1 - add employee

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

	cout << "1 - Add employee" << endl;
	cout << "2 - Delete employee" << endl;
	cout << "3 - Add Patient" << endl;
	cout << "4 - Discharge patient" << endl;
	cout << "5 - Print physicians" << endl;
	cout << "6 - Print patient's physicians" << endl;
	cout << "7 - Print employee earnings" << endl;
	return 0;
}
