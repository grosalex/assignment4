/*
 * HospitalBed.h
 *
 *  Created on: 2 nov. 2013
 *      Author: William
 */

#ifndef HOSPITALBED_H_
#define HOSPITALBED_H_

class HospitalBed {
public:
	HospitalBed();
	bool isAvailability() const;
	void setAvailability(bool availability);
	int getPatientNumber() const;
	void setPatientNumber(int patientNumber);

private:
	bool availability;
	int patient_number;
};

#endif /* HOSPITALBED_H_ */
