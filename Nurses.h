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
	virtual ~Nurses();
private:
	double biweeklysalary;
	string work_shift;
	static double evening_overtimepay;
	static double night_overtimepay;

};

#endif /* NURSES_H_ */
