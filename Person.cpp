/*
 * Person.cpp
 *
 *  Created on: 28 oct. 2013
 *      Author: grosalex
 */

#include "Person.h"

Person::Person() {
	string inName, inAddress;
	Date inDate;
	cout << "Enter the name : ";
	cin >> inName;
	cout << "Enter the address : ";
	cin >> inAddress;
	birthdate=inDate;
	name=inName;
	address=inAddress;
}

Person::Person(string inName, string inAddress, Date inDate) {
	birthdate=inDate;
	name=inName;
	address=inAddress;
}

Person::~Person() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Person::print() {
}

const string& Person::getAddress() const {
	return address;
}

void Person::setAddress(const string& address) {
	this->address = address;
}

const Date& Person::getBirthdate() const {
	return birthdate;
}

void Person::setBirthdate(const Date& birthdate) {
	this->birthdate = birthdate;
}

const string& Person::getName() const {
	return name;
}

void Person::setName(const string& name) {
	this->name = name;
}
