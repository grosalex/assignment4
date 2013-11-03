/*
 * HospitalManager.cpp
 *
 *  Created on: 2 nov. 2013
 *      Author: William
 */

#include "HospitalManager.h"

HospitalManager::HospitalManager() {
	for(int i=0;i<maxbed;i++) {
		patientArray[i] = NULL;
	}

	for(int i=0;i<maxperson;i++) {
		personnelArray[i] = NULL;
	}

	for(int i=0;i<archivesize;i++) {
		patientdischargedArray[i] = NULL;
	}

}

HospitalManager::~HospitalManager() {
	// TODO Auto-generated destructor stub
}

bool HospitalManager::patient_admission(Patient* patient, int physician_id) {
}

bool HospitalManager::patient_discharge(int patient_nb) {
}

bool HospitalManager::add_employee(Personnel* employee) {
}

bool HospitalManager::remove(int employee_nb) {
}

void HospitalManager::print_mypatients(int physician_id) {
}

void HospitalManager::print_physicians() {
}

void HospitalManager::print(int employee_id) {
}
