/*
 * Patient.cpp
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#include "Patient.h"
int Patient::patient_count = 0;
Patient::Patient(string inName, string inAddress, Date inDate, Date inAdmission)
	:Person(inName,inAddress,inDate) {
	patient_count++;
	patient_number = patient_count;
	date_of_admission = inAdmission;
	my_physician=NULL;
	bednumer=-1;
}

Patient::~Patient() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

double Patient::earnings() {
	return NULL;

}

void Patient::print() {
	Person::print();
	cout << "\nPatient number : " << patient_number << endl;
	cout << "Date of admission : ";
	date_of_admission.print();
}

int Patient::getBednumer() const {
	return bednumer;
}

void Patient::setBednumer(int bednumer) {
	this->bednumer = bednumer;
}

const Date& Patient::getDateOfAdmission() const {
	return date_of_admission;
}

void Patient::setDateOfAdmission(const Date& dateOfAdmission) {
	date_of_admission = dateOfAdmission;
}

const Physicians* Patient::getMyPhysician() const {
	return my_physician;
}

void Patient::setMyPhysician(Physicians* myPhysician) {
	my_physician = myPhysician;
}

int Patient::getPatientNumber() const {
	return patient_number;
}

void Patient::setPatientNumber(int patientNumber) {
	patient_number = patientNumber;
}
