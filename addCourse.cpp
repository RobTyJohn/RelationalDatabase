/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include"MyCourses.h"
#include"Course.h"

using namespace std;

// addCourse() function definitions
void MyCourses::addCourse(int id, string number, string name, string quarter, string year, string subject) {
	// creates an instance of Course class and passes function parameters to new class instance
	Course course(id, number, name, quarter, year, subject);
	// places database entry made from Course class into MyCourses class container
	database.push_back(course);
	// iterates primary key ID by 1
	ID++;
}
