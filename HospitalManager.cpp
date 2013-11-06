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
	bool ok = false;
	for(int i=0; i<maxbed;i++) {
		if(patientArray[i]!=NULL)
			if (patient_nb == dynamic_cast <Patient*> (patientArray[i])->getPatientNumber())
			{
				cout << "Found patient at index " << i << " in patient array." << endl;
				for(int j=0; j<archivesize;j++) {
					if(patientdischargedArray[j] == NULL) {
						patientdischargedArray[j] = patientArray[i]
						ok = true;
						cout << "Patient transfered in patient discharged array at index " << j << endl;
					}
				}

				delete(patientArray[i]);
				patientArray[i] = NULL;
				i = maxbed; //leaving for loop
			}
	}
	if(ok) cout << "Patient discharged successfully." << endl;
	else cout << "Patient no discharged." << endl;

	return ok;
}

bool HospitalManager::add_employee(Personnel* employee) {
	bool ok=false;
	for(int i=0; i<maxperson;i++) {
		if(personnelArray[i]==NULL) {
			personnelArray[i] = employee;
			cout << "Employee added at index " << i <<" in personnel array." << endl;
			ok = true;
			i = maxperson;
		}
	}
	return ok;
}

bool HospitalManager::remove(int employee_nb) {
}

void HospitalManager::print_mypatients(int physician_id) {
}

void HospitalManager::print_physicians() {
}

void HospitalManager::print(int employee_id) {
}
