/*
 * Physicians.h
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#ifndef PHYSICIANS_H_
#define PHYSICIANS_H_

#include "Personnel.h"
#include "Person.h"

class Physicians: public Personnel {
public:
	Physicians();
	Physicians(string,string,Date,string,Date,int,string,double);
	void addPatient(Patient*);
	virtual ~Physicians();
	virtual void print();
	double getMonthlysalary() const;
	void setMonthlysalary(double monthlysalary);
	int getPhysicianId() const;
	void setPhysicianId(int physicianId);
	const string& getSpecialization() const;
	void setSpecialization(const string& specialization);
	void printPatient();
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
