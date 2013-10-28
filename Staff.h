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
	virtual ~Staff();
private:
	double biweeklysalary;
};

#endif /* STAFF_H_ */
