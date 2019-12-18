#include<iostream>
#include<string>
#include<vector>
#include"MyCourses.h"
#include"Course.h"

using namespace std;

bool MyCourses::operator<(const Course& c1, const Course& c2) {
	if (sortType == "Name") {
		return c1.courseName < c2.courseName;
	}
	else if (sortType == "Date") {
		return c1.courseYear < c2.courseYear;
	}
	else if (sortType == "Number") {
		return c1.courseNumber < c2.courseNumber;
	}
	else {
		cout << "\n**Sort Error**\n";
	}
}