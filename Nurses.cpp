/*
 * Nurses.cpp
 *
 *  Created on: 30 oct. 2013
 *      Author: grosalex
 */

#include "Nurses.h"

Nurses::Nurses():Personnel() {
	double inBiweeklySalary;
	string inWorkShift;
	cout << "Enter the biweekly Salary : ";
	cin >> inBiweeklySalary;
	cout << "Enter the work shift : ";
	cin >> inWorkShift;
	biweeklysalary=inBiweeklySalary;
	work_shift=inWorkShift;
}
Nurses::Nurses(string inName, string inAddress, Date inBirthDate,
		string inSocialAssurance, Date inEmploymentDate,
		double inBiweeklySalary, string inWorkShift) : Personnel(inName,inAddress, inBirthDate, inSocialAssurance,inEmploymentDate) {
	biweeklysalary=inBiweeklySalary;
	work_shift=inWorkShift;
}
Nurses::~Nurses() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Nurses::print() {
	Personnel::print();
	cout << "\nWork Shift : " << work_shift << endl;
	cout << "Earnings : $" << earning();
}

double Nurses::getBiweeklysalary() const {
	return biweeklysalary;
}

void Nurses::setBiweeklysalary(double biweeklysalary) {
	this->biweeklysalary = biweeklysalary;
}

static double Nurses::getEveningOvertimepay() const {
	return evening_overtimepay;
}

void Nurses::setEveningOvertimepay(static double eveningOvertimepay) {
	evening_overtimepay = eveningOvertimepay;
}

static double Nurses::getNightOvertimepay() const {
	return night_overtimepay;
}

void Nurses::setNightOvertimepay(static double nightOvertimepay) {
	night_overtimepay = nightOvertimepay;
}

const string& Nurses::getWorkShift() const {
	return work_shift;
}


void Nurses::setWorkShift(const string& workShift) {
	work_shift = workShift;
}

double Nurses::earning() {
	if(work_shift=="night"){
		return biweeklysalary+night_overtimepay;
	}
	else if(work_shift=="evening"){
		return biweeklysalary+evening_overtimepay;
	}
	else return biweeklysalary;
}
