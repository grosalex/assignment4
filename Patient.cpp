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

}

Patient::~Patient() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

