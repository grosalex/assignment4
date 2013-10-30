/*
 * Patient.h
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#ifndef PATIENT_H_
#define PATIENT_H_

#include "Person.h"

class Patient: public Person {
public:
	Patient();
	virtual ~Patient();
private:
	//patient_count is initialized to zero and incremented by one at each patient admission.
	static int patient_count;
	// patient_number is assigned the new value of the patient_count.
	int patient_number;
	// bednumber corresponds to the array index of the assigned bed.
	int bednumer;
	Date date_of_admission;
	// Pointer to the patient’s physician.
	Physician * my_physician;

};

#endif /* PATIENT_H_ */
