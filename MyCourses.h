/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Course.h"

// standard naming conventions
using namespace std;

// MyCourses class declarations
class MyCourses {
public:
	// default constructor
	MyCourses();
	// used to sort data in data base, takes a string value to determine by which attribute to sort by
	void dataSort(string st);
	// adds a new database entry according to values passed to function parameters
	void addCourse(int id, string number, string name, string quarter, string year, string subject);
	// prints an individual database entry to screen, parameter is used to choose location
	void printCourse(int iterator);
	// prints all database entries to screen
	void printAllCourses();
	// searches database for parameter value
	void searchData(string data);
	// returns value of class variable int ID
	int getID() { return ID; }
	// structs used to override operator() in order for sort() function to work properly
	struct name;
	struct year;
	struct number;
	struct quarter;
	struct subject;
private:
	// used to create primary keys in database
	int ID;
	// container to hold database entries
	vector<Course>database;
};

// struct definitions, allows custom object Course to be sorted by a specific value
struct MyCourses::name {
	bool operator()(const Course& c1, const Course& c2) {
		return c1.courseName < c2.courseName;
	}
};

struct MyCourses::year {
	bool operator()(const Course& c1, const Course& c2) {
		return c1.courseYear < c2.courseYear;
	}
};

struct MyCourses::number {
	bool operator()(const Course& c1, const Course& c2) {
		return c1.courseNumber < c2.courseNumber;
	}
};

struct MyCourses::quarter {
	bool operator()(const Course& c1, const Course& c2) {
		return c1.courseQuarter < c2.courseQuarter;
	}
};

struct MyCourses::subject {
	bool operator()(const Course& c1, const Course& c2) {
		return c1.courseSubject < c2.courseSubject;
	}
};


