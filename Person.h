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
	const string& getAddress() const;
	void setAddress(const string& address);
	const Date& getBirthdate() const;
	void setBirthdate(const Date& birthdate);
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	string address;
	Date birthdate;

};

#endif /* PERSON_H_ */
