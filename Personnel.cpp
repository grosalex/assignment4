/*
 * Personnel.cpp
 *
 *  Created on: 28 oct. 2013
 *      Author: grosalex
 */

#include "Personnel.h"
int Personnel::employee_count = 0;
Personnel::Personnel() : Person(){
	string inSoccialAssurance;
	//cout << "Enter employment Date" << endl;
	//Date inEmployementDate;
	employee_count++;
	employee_id=employee_count;

	cout << "Enter his social assurance number : ";
	cin >> inSoccialAssurance;
	social_insurance_number = inSoccialAssurance;
	//employment_date=inEmployementDate;
}

Personnel::Personnel(string inName, string inAddress, Date inBirthDate,
		string inSocialAssurance, Date inEmploymentDate) : Person(inName,inAddress, inBirthDate){
	employee_count++;
	social_insurance_number=inSocialAssurance;
	employee_id=employee_count;
	employment_date=inEmploymentDate;
}

void Personnel::print() {
	Person::print();
	cout << "\nEmployee ID : " << employee_id << endl;
	cout << "Social Insurance Number : " << social_insurance_number << endl;
	cout << "Employment Date : ";
	employment_date.print();
}

Personnel::~Personnel() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

int Personnel::getEmployeeId() const {
	return employee_id;
}

void Personnel::setEmployeeId(int employeeId) {
	employee_id = employeeId;
}

const Date& Personnel::getEmploymentDate() const {
	return employment_date;
}

void Personnel::setEmploymentDate(const Date& employmentDate) {
	employment_date = employmentDate;
}

const string& Personnel::getSocialInsuranceNumber() const {
	return social_insurance_number;
}

void Personnel::setSocialInsuranceNumber(const string& socialInsuranceNumber) {
	social_insurance_number = socialInsuranceNumber;
}
