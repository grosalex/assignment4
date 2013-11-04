/*
 * HospitalManager.h
 *
 *  Created on: 2 nov. 2013
 *      Author: William
 */

#ifndef HOSPITALMANAGER_H_
#define HOSPITALMANAGER_H_
#include "HospitalBed.h"
#include "Person.h"
#include "Patient.h"
class HospitalManager {
public:
	HospitalManager();
	virtual ~HospitalManager();
	// A patient will be admitted if there is an available bed in the hospital.
	// Parameter int is physician_id for his doctor. Pointer to an admitted patient is stored
	// at the patientArray.
	bool patient_admission ( Patient *, int) ;
	// Parameter corresponds to the patient number. Pointer to the discharged patient object
	//should be transferred from patientArray to the patientdischared array.
	bool patient_discharge( int );
	// Following function adds a new employee to the hospital personnel.
	bool add_employee(Personnel *);
	// Following function removes an employee from thehospital personnel, parameter is the
	// employee number.
	bool remove( int);
	// Following function prints information about all the patients of a physician,
	// parameter is physician_id.
	void print_mypatients(int);
	// Following function prints all the information about the physicians employed presently
	// by the hospital.
	void print_physicians();
	// Following function prints all the information about an employee, including his
	// earnings, parameter is the employee_id.
	void print(int);

private:
	static const int maxbed = 400;
	static const int maxperson = 200;
	static const int archivesize = 4000;
	// Following is an array of bed objects.
	// Each bed has a unique bed number that corresponds to its array index.
	HospitalBed bedArray[maxbed];
	// Pointers to personnel is stored in the followingarray of pointers.
	Person * personnelArray[maxperson];
	// Pointers to current patients is stored in the following array of pointers.
	Person * patientArray[maxbed];
	// Pointers to discharged patients is stored in thefollowing array of pointers.
	Patient * patientdischargedArray[archivesize];
};


#endif /* HOSPITALMANAGER_H_ */
