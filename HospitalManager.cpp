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
	bool thereIsFreeBed=false;
	int i=0,j=0,k=0,l=0;
	for(i=0;i<maxbed;i++){
		if(bedArray[i].isAvailability()){
			thereIsFreeBed=true;
			bedArray[i].setAvailability(false);
			for(j=0;j<maxbed;j++){
				if(patientArray[j]==NULL){
					patientArray[j]=patient;
					dynamic_cast <Patient*> (patientArray[j])->setBednumer(i);
					bedArray[i].setPatientNumber(dynamic_cast<Patient*> (patientArray[j])->getPatientNumber());
					for(k=0;k<maxperson;k++){
						if(dynamic_cast <Physicians*>(personnelArray[k])!=0){
							if(dynamic_cast <Physicians*>(personnelArray[k])->getPhysicianId()==physician_id){
								dynamic_cast <Patient*> (patientArray[j])->setMyPhysician(dynamic_cast <Physicians*>(personnelArray[k]));
								dynamic_cast <Physicians*>(personnelArray[k])->addPatient(dynamic_cast <Patient*> (patientArray[j]));

								cout << dynamic_cast <Patient*>(patientArray[j])->getName() << "Has well been added to " << dynamic_cast <Physicians*>(personnelArray[k])->getName() << "physicyans and the patient is in bed number "<< i << endl;
								k=maxperson;

							}
						}
					}
					j=maxbed;
				}
			}
			i=maxbed;
		}
	}
	return thereIsFreeBed;
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
	int i=0;
	for(i=0;i<maxperson;i++){
		if(dynamic_cast <Physicians*> (personnelArray[i])!=0){
			dynamic_cast<Physicians*>(personnelArray[i])->print();
		}
	}

}

void HospitalManager::print(int employee_id) {
}
