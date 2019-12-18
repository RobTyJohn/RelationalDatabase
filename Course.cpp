/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include"Course.h"

using namespace std;

// Course class default constructor definitions
Course::Course(int course_id, string course_number, string course_name, string course_quarter, string course_year, string course_subject) {
	// takes function parameters and assigns values to local variables
	courseID = course_id;
	courseNumber = course_number;
	courseName = course_name;
	courseQuarter = course_quarter;
	courseYear = course_year;
	courseSubject = course_subject;
}
