/*
 * Staff.cpp
 *
 *  Created on: 28 oct. 2013
 *      Author: grosalex
 */

#include "Staff.h"

Staff::Staff():Personnel() {
	double inBiweeklySalary;
	cout << "What is his biweekly salary? : ";
	cin >> inBiweeklySalary;
	biweeklysalary=inBiweeklySalary;
}
Staff::Staff(string inName, string inAddress, Date inBirthDate,
		string inSocialAssurance, Date inEmploymentDate,
		double inBiweeklySalary) : Personnel(inName, inAddress, inBirthDate, inSocialAssurance,inEmploymentDate){
	biweeklysalary=inBiweeklySalary;
}
Staff::~Staff() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Staff::print() {
	Personnel::print();
	cout << "\nBiweekly Salary : $" << biweeklysalary;
}

double Staff::getBiweeklysalary() const {
	return biweeklysalary;
}


void Staff::setBiweeklysalary(double biweeklysalary) {
	this->biweeklysalary = biweeklysalary;
}
