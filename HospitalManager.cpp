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
			//thereIsFreeBed=true;
			//bedArray[i].setAvailability(false);
			for(j=0;j<maxbed;j++){
				if(patientArray[j]==NULL){
					//patientArray[j]=patient;
					//dynamic_cast <Patient*> (patientArray[j])->setBednumer(i);
					//bedArray[i].setPatientNumber(dynamic_cast<Patient*> (patientArray[j])->getPatientNumber());
					for(k=0;k<maxperson;k++){
						if(dynamic_cast <Physicians*>(personnelArray[k])!=0){
							if(dynamic_cast <Physicians*>(personnelArray[k])->getPhysicianId()==physician_id){

								//Setting patient's bed
								thereIsFreeBed=true;
								bedArray[i].setAvailability(false);

								//Adding patient in array
								patientArray[j]=patient;
								dynamic_cast <Patient*> (patientArray[j])->setBednumer(i);
								bedArray[i].setPatientNumber(dynamic_cast<Patient*> (patientArray[j])->getPatientNumber());

								//Setting physician's patient and patient's physician
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
	bool ok = false;
	for(int i=0; i<maxbed;i++) {
		if(patientArray[i]!=NULL)
			if (patient_nb == dynamic_cast <Patient*> (patientArray[i])->getPatientNumber())
			{
				cout << "Found patient at index " << i << " in patient array." << endl;
				for(int j=0; j<archivesize;j++) {
					if(patientdischargedArray[j] == NULL) {
						patientdischargedArray[j] = dynamic_cast <Patient*>(patientArray[i]);
						ok = true;
						cout << "Patient transfered in patient discharged array at index " << j << endl;
						j = archivesize;
					}
				}

				/*for(int j=0;j<maxperson;j++) {
					if(dynamic_cast <Physicians*> (personnelArray[i])!=0) {
						for(int k=0; k<dynamic_cast <Physicians*> (personnelArray[i])->getMaxpatients();k++) {
							if()
						}
					}
				}*/

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
	bool ok=false;
	for(int i=0; i<maxperson;i++) {
		if(personnelArray[i]!=NULL) {
			if(dynamic_cast <Personnel*> (personnelArray[i])->getEmployeeId() == employee_nb) {
				cout << "Found personnel at index " << i << " in personnel array" << endl;
				delete(personnelArray[i]);
				personnelArray[i] = NULL;
				i = maxperson;
				ok =true;
			}
		}
	}

	return ok;
}

void HospitalManager::print_mypatients(int physician_id) {
	int i=0;
	for(i=0;i<maxperson;i++){
		if(personnelArray[i]!=NULL){
			if(dynamic_cast <Physicians*> (personnelArray[i])!=0 ) {
				if(dynamic_cast<Personnel*>(personnelArray[i])->getEmployeeId()==physician_id){
					dynamic_cast <Physicians*> (personnelArray[i])->printPatient();
				}
				else{
					cout << "The specify id isn't a physician id" << endl;
				}
			}
		}
	}
}

void HospitalManager::print_physicians() {
	int i=0;
	for(i=0;i<maxperson;i++){
		if(personnelArray[i]!=NULL){
			if(dynamic_cast <Physicians*> (personnelArray[i])!=0){
				dynamic_cast<Physicians*>(personnelArray[i])->print();
			}
		}
	}



}

void HospitalManager::print(int employee_id) {
	int i=0;
	for(i=0;i<maxperson;i++){
		if(personnelArray[i]!=NULL){
			if(dynamic_cast <Personnel*> (personnelArray[i])->getEmployeeId()==employee_id){
				if(dynamic_cast<Staff*>(personnelArray[i])!=0){
					dynamic_cast<Staff*>(personnelArray[i])->print();
				}
				else if (dynamic_cast<Nurses*>(personnelArray[i])!=0) {
					dynamic_cast<Nurses*>(personnelArray[i])->print();
				}
				else if (dynamic_cast<Physicians*>(personnelArray[i])!=0) {
					dynamic_cast<Physicians*>(personnelArray[i])->print();
				}
			}
		}
	}

}

void HospitalManager::printallpersonnel() {
	int i=0;
	for(i=0;i<maxperson;i++){
		if(personnelArray[i]!=NULL){
			if(dynamic_cast<Staff*>(personnelArray[i])!=0){
				dynamic_cast<Staff*>(personnelArray[i])->print();
			}
			else if (dynamic_cast<Nurses*>(personnelArray[i])!=0) {
				dynamic_cast<Nurses*>(personnelArray[i])->print();
			}
			else if (dynamic_cast<Physicians*>(personnelArray[i])!=0) {
				dynamic_cast<Physicians*>(personnelArray[i])->print();
			}
		}
	}
}

int HospitalManager::getMaxperson(){
	return maxperson;
}
