/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include"MyCourses.h"
#include"Course.h"

using namespace std;

// printCourse function definitions
void MyCourses::printCourse(int iterator) {
	// try/catch block in case iterator location does not exist
	try {
		// prints each individual database attribute to screen
		cout << "\nCourse ID: " << database[iterator].courseID << endl;
		cout << "Course Number: " << database[iterator].courseNumber << endl;
		cout << "Course Name: " << database[iterator].courseName << endl;
		cout << "Course Quarter: " << database[iterator].courseQuarter << endl;
		cout << "Course Year: " << database[iterator].courseYear << endl;
		cout << "Course Subject: " << database[iterator].courseSubject << endl;
	}
	catch (const out_of_range& e) {
		cout << "\n**Out of range error**\n";
	}
}
