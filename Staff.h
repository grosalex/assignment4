/*
 * Staff.h
 *
 *  Created on: 28 oct. 2013
 *      Author: grosalex
 */

#ifndef STAFF_H_
#define STAFF_H_

#include "Personnel.h"

class Staff: public Personnel {
public:
	Staff();
	Staff(string inName, string inAddress, Date inBirthDate, string inSocialAssurance, Date inEmploymentDate, double inBiweeklySalary);
	virtual ~Staff();
	virtual void print();
	virtual double earnings();
	void setBiweeklysalary(double biweeklysalary);

private:
	double biweeklysalary;
};

#endif /* STAFF_H_ */
