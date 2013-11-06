/*
 * Patient.h
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#ifndef PATIENT_H_
#define PATIENT_H_

#include "Person.h"
#include "Physicians.h"

class Patient: public Person {
public:
	Patient();
	Patient(string,string,Date,Date);
	virtual void print();
	virtual ~Patient();
	int getBednumer() const;
	void setBednumer(int bednumer);
	const Date& getDateOfAdmission() const;
	void setDateOfAdmission(const Date& dateOfAdmission);
	const Physicians*& getMyPhysician() const;
	void setMyPhysician(const Physicians*& myPhysician);
	int getPatientNumber() const;
	void setPatientNumber(int patientNumber);

private:
	//patient_count is initialized to zero and incremented by one at each patient admission.
	static int patient_count;
	// patient_number is assigned the new value of the patient_count.
	int patient_number;
	// bednumber corresponds to the array index of the assigned bed.
	int bednumer;
	Date date_of_admission;
	// Pointer to the patient’s physician.
	Physicians * my_physician;

};

#endif /* PATIENT_H_ */
