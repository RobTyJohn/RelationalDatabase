/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include<iostream>
#include<string>
#include<thread>
#include<chrono>
#include"MyCourses.h"

// standard naming conventions
using namespace std;

// main program
int main() {
	// declares instance of MyCourses class
	MyCourses myCourses;
	// bool to control program loop
	bool endProgram = false;
	// string value for user input
	string input;

	// program loop
	do {
		// UI menu options
		cout << "\nEnter one of the following options and then press 'Enter'\n"
			"1- Print data by course number\n"
			"2- Print data by course name\n"
			"3- Print data by course quarter\n"
			"4- Print data by course year\n"
			"5- Print data by course subject\n"
			"6- Add data\n"
			"7- Search\n"
			"8- Exit\n>";
		// accepts user input
		getline(cin, input);

		// if statements to perform menu options
		if (input == "1") {
			// sorts data by parameter value, repeats for menu options 1-5
			myCourses.dataSort("number");
			// prints data to screen
			myCourses.printAllCourses();
		}
		else if (input == "2") {
			myCourses.dataSort("name");
			myCourses.printAllCourses();
		}
		else if (input == "3") {
			myCourses.dataSort("quarter");
			myCourses.printAllCourses();
		}
		else if (input == "4") {
			myCourses.dataSort("year");
			myCourses.printAllCourses();
		}
		else if (input == "5") {
			myCourses.dataSort("subject");
			myCourses.printAllCourses();
		}
		else if (input == "6") {
			// takes user input and stores to string values to pass on to function addCourse()
			string number, name, quarter, year, subject;
			cout << "Enter the course number: \n>";
			getline(cin, number);
			cout << "Enter the course name: \n>";
			getline(cin, name);
			cout << "Enter the course quarter, Example- 'Winter': \n>";
			getline(cin, quarter);
			cout << "Enter the course date, Example- '2019': \n>";
			getline(cin, year);
			cout << "Enter the course subject: \n>";
			getline(cin, subject);

			// passes string values to function along with next ID value from MyCourses class to create a new database entry
			myCourses.addCourse(myCourses.getID(), number, name, quarter, year, subject);
			// user confirmation
			cout << "\n**Data accepted**\n";
		}
		else if (input == "7") {
			// string value to store input
			string search;
			cout << "Enter value to search for:\n>";
			getline(cin, search);
			// passes string search to function to perform search
			myCourses.searchData(search);
		}
		else if (input == "8") {
			// changes bool endProgram to true to exit program
			endProgram = true;
		}
		else {
			// error message if any other values are entered
			cout << "\n**Error- Invalid input- Try again**\n";
			// clears cin to accept new input
			cin.clear();
		}
		// loop will run until bool endProgram is true
	} while (!endProgram);

	cout << "\nGoodbye!\n";
	this_thread::sleep_for(chrono::milliseconds(500));

	// exits program
	return 0;
}