/*
 * Person.h
 *
 *  Created on: 28 oct. 2013
 *      Author: grosalex
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include "Date.h"
class Person {
public:
	Person(string inName, string inAddress, Date inDate);
	Person();
	virtual ~Person();
	virtual void earnings( ) = 0;
	virtual void print ( );

private:
	string name;
	string address;
	Date birthdate;

};

#endif /* PERSON_H_ */
