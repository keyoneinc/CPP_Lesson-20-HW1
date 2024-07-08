#include "Student.h"

Student::Student(string fullName, double averageScore, string phoneNumber, string address, string institutionName, int groupNumber)
{
	this->fullName = fullName;
	this->averageScore = averageScore;
	this->phoneNumber = phoneNumber;
	this->address = address;
	this->institutionName = institutionName;
	this->groupNumber = groupNumber;
}

string Student::getFullName() const
{
	return fullName;
}

double Student::getAverageScore() const
{
	return averageScore;
}

string Student::getPhoneNumber() const
{
	return phoneNumber;
}

string Student::getAddress() const
{
	return address;
}

string Student::getInstitutionName() const
{
	return institutionName;
}

int Student::getGroupNumber() const
{
	return groupNumber;
}

void Student::setFullName(const string& fullName)
{
	this->fullName = fullName;
}

void Student::setAverageScore(double averageScore)
{
	this->averageScore = averageScore;
}

void Student::setPhoneNumber(const string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Student::setAddress(const string& address)
{
	this->address = address;
}

void Student::setInstitutionName(const string& institutionName)
{
	this->institutionName = institutionName;
}

void Student::setGroupNumber(int groupNumber)
{
	this->groupNumber = groupNumber;
}

void Student::showInfo()
{
	cout << "\nStudent Information:" << endl;
	cout << "Full Name: " << fullName << endl;
	cout << "Average Score: " << averageScore << endl;
	cout << "Phone Number: " << phoneNumber << endl;
	cout << "Address: " << address << endl;
	cout << "Institution Name: " << institutionName << endl;
	cout << "Group Number: " << groupNumber << endl << endl;
}
