/*
 * Physicians.h
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#ifndef PHYSICIANS_H_
#define PHYSICIANS_H_

#include "Personnel.h"

class Physicians: public Personnel {
public:
	Physicians();
	virtual ~Physicians();
private:
	// Each physician has a unique id as a doctor.
	int physician_id;
	// Physicians will have specialization such as general practitioner, cardiologist,
	// orthopedist etc.
	string specialization;
	double monthlysalary;
	static const int maxpatients = 200;
	// Array of pointers to the patients for this physician.
	Patient * mypatients[maxpatients];

};

#endif /* PHYSICIANS_H_ */