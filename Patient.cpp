/*
 * Patient.cpp
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#include "Patient.h"
int Patient::patient_count = 0;
Patient::Patient(string inName, string inAddress, Date inDate, Date inAdmission, int physician_id)
	:Person(inName,inAddress,inDate) {
	patient_count++;
	patient_number = patient_count;
	date_of_admission = inAdmission;
///TODO search physician in personnalarray + bednumber

}

Patient::~Patient() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

