/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include"Course.h"

// Course class default constructor definitions
Course::Course(int course_id, std::string course_number, std::string course_name, std::string course_quarter, std::string course_year, std::string course_subject) {
	// takes function parameters and assigns values to local variables
	courseID = course_id;
	courseNumber = course_number;
	courseName = course_name;
	courseQuarter = course_quarter;
	courseYear = course_year;
	courseSubject = course_subject;
}
