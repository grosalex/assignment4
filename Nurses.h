/*
 * Nurses.h
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#ifndef NURSES_H_
#define NURSES_H_

#include "Personnel.h"

class Nurses: public Personnel {
public:
	Nurses();
	Nurses(string inName, string inAddress, Date inBirthDate, string inSocialAssurance, Date inEmploymentDate, double inBiweeklySalary, string inWorkShift);
	virtual ~Nurses();
	virtual void print();
	double getBiweeklysalary() const;
	void setBiweeklysalary(double biweeklysalary);
	const string& getWorkShift() const;
	void setWorkShift(const string& workShift);

	virtual double earnings();

private:
	double biweeklysalary;
	string work_shift;
	static double evening_overtimepay;
	static double night_overtimepay;

};

#endif /* NURSES_H_ */
