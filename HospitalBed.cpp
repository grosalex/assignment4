/*
 * HospitalBed.cpp
 *
 *  Created on: 2 nov. 2013
 *      Author: William
 */

#include "HospitalBed.h"

HospitalBed::HospitalBed() {
	availability = true;
	patient_number = 0;

}

bool HospitalBed::isAvailability() const {
	return availability;
}

void HospitalBed::setAvailability(bool availability) {
	this->availability = availability;
}

int HospitalBed::getPatientNumber() const {
	return patient_number;
}

void HospitalBed::setPatientNumber(int patientNumber) {
	patient_number = patientNumber;
}
