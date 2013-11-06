/*
 * Personnel.h
 *
 *  Created on: 28 oct. 2013
 *      Author: grosalex
 */

#ifndef PERSONNEL_H_
#define PERSONNEL_H_

#include "Person.h"

class Personnel: public Person {
public:
	Personnel();
	Personnel(string inName, string inAddress, Date inBirthDate, string inSocialAssurance, Date inEmploymentDate);
	virtual void print();
	virtual ~Personnel();
	int getEmployeeId() const;
	void setEmployeeId(int employeeId);
	const Date& getEmploymentDate() const;
	void setEmploymentDate(const Date& employmentDate);
	const string& getSocialInsuranceNumber() const;
	void setSocialInsuranceNumber(const string& socialInsuranceNumber);

private:
	// employee_count is initialized to zero and incremented by one each time a new
	// employee is hired.
	static int employee_count;
	string social_insurance_number;
	int employee_id; // initialized to the new value of the employee_count
	Date employment_date;

};

#endif /* PERSONNEL_H_ */
