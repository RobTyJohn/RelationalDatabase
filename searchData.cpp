/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include<iostream>
#include<string>
#include<vector>
#include"MyCourses.h"
#include"Course.h"

using namespace std;

// searchData() function definitions
void MyCourses::searchData(string data) {
	// bool value to see if a match was found
	bool dataFound = false;
	// iterates through database looking for matches
	for (int i = 0; i < database.size(); i++) {
		// searches each database attribute and determines if a match was found
		size_t nameFound = database[i].courseName.find(data);
		size_t numberFound = database[i].courseNumber.find(data);
		size_t quarterFound = database[i].courseQuarter.find(data);
		size_t subjectFound = database[i].courseSubject.find(data);
		size_t yearFound = database[i].courseYear.find(data);

		// if values are not null then a match was found and the database entry is printed to screen
		if (nameFound!=string::npos) {
			printCourse(i);
			// dataFound is set to true if match is found
			dataFound = true;
		}
		// repeats for each attribute
		else if (numberFound != string::npos) {
			printCourse(i);
			dataFound = true;
		}
		else if (quarterFound != string::npos) {
			printCourse(i);
			dataFound = true;
		}
		else if (subjectFound != string::npos) {
			printCourse(i);
			dataFound = true;
		}
		else if (yearFound != string::npos) {
			printCourse(i);
			dataFound = true;
		}
	}
	// if no data was found, message prints to screen
	if (!dataFound) {
		cout << "\n**No data found**\n";
	}
}