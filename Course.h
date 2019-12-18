/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#pragma once
#include<iostream>
#include<string>

using namespace std;

// Course class declarations
class Course {
public:
	// default constructor takes parameters and stores values to local variables
	Course(int id, string course_number, string course_name, string course_quarter, string course_year, string course_subject);
	// local variables used to store table attributes
	int courseID;
	string courseNumber;
	string courseName;
	string courseQuarter;
	string courseYear;
	string courseSubject;
};