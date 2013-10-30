/*
 * Physicians.cpp
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#include "Physicians.h"

Physicians::Physicians(string inName, string inAddress, Date inBirthDate, string inSocialAssurance, Date inEmploymentDate, int inPhysicianid,string inSpe, double inMonthSalary)
	:Personnel(inName, inAddress, inBirthDate, inSocialAssurance, inEmploymentDate)
{
	physician_id = inPhysicianid;
	specialization = inSpe;
	monthlysalary = inMonthSalary;
}

Physicians::Physicians() :Personnel()
{
	int inPhysicianid;
	string inSpe;
	double inMonthSalary;
	cout << "Enter Physician ID : ";
	cin >> inPhysicianid;
	cout << "Enter specialization :";
	cin >> inSpe;
	cout << "Enter monthly salary :";
	cin >> inMonthSalary;

	physician_id = inPhysicianid;
	specialization = inSpe;
	monthlysalary = inMonthSalary;
}

Physicians::~Physicians() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

