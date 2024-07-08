#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string fullName;
    double averageScore;
    string phoneNumber;
    string address;
    string institutionName;
    int groupNumber;

public:
    Student(const string fullName, double averageScore, string phoneNumber, string address, string institutionName, int groupNumber);
    
    string getFullName() const;
    double getAverageScore() const;
    string getPhoneNumber() const;
    string getAddress() const;
    string getInstitutionName() const;
    int getGroupNumber() const;

    void setFullName(const string& fullName);
    void setAverageScore(double averageScore);
    void setPhoneNumber(const string& phoneNumber);
    void setAddress(const string& address);
    void setInstitutionName(const string& institutionName);
    void setGroupNumber(int groupNumber);

    void showInfo();


};
