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

// printAllCourses() function definitions
void MyCourses::printAllCourses() {
	//iterates through container and prints all entries
	for (int i = 0; i < database.size(); i++) {
		printCourse(i);
	}
}