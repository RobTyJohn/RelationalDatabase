/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include"MyCourses.h"
#include"Course.h"

using namespace std;

// dataSort() function definitions
void MyCourses::dataSort(string st){
	// takes parameter value and then determines which sort type to perform
	if (st == "name") {
		// passes struct from MyCourses class to sort database by a specific attribute
		sort(database.begin(), database.end(), name());
	}
	// repeats for each attribute type
	else if (st == "year") {
		sort(database.begin(), database.end(), year());
	}
	else if (st == "number") {
		sort(database.begin(), database.end(), number());
	}
	else if (st == "quarter") {
		sort(database.begin(), database.end(), quarter());
	}
	else if (st == "subject") {
		sort(database.begin(), database.end(), subject());
	}
	// prints error if invalid parameter value is passed to function
	else {
		cout << "\n**Invalid parameter value**\n";
	}
}