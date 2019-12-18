/*
	Robert T. Johnson
	Module 10 programming assignment- Relational Databases
	June 7, 2019
*/

// header files
#include"MyCourses.h"
#include"Course.h"

using namespace std;

// default constructor definitions
MyCourses::MyCourses() {
	// prints title
	cout << "\tRelation Database\n";
	// sets primary key to 1
	ID = 1;
	// calls addCourse() function to create default database entries whenever an instance of MyCourse class is created
	addCourse(ID, "UE1", "Unrestricted Elective 1 (Fulfilled by WST4350)", "Winter", "2019", "Misc");
	addCourse(ID, "REL3131", "American Religious History (SUB)", "Summer", "2018", "History");
	addCourse(ID, "PSY1012", "General Psychology (SUB)", "Summer", "2016", "Psychology");
	addCourse(ID, "PHI2103", "Introduction to Critical Thinking", "Fall", "2015", "Computer Science");
	addCourse(ID, "MMC3407", "Visual Communication in the Media (SUB)", "Winter", "2018", "Communication");
	addCourse(ID, "MAP3010", "Probability and Statistics", "Summer", "2017", "Math");
	addCourse(ID, "MAD3113", "Applied Discrete Mathematics", "Spring", "2019", "Math");
	addCourse(ID, "MAD2112", "Introduction to Discrete Mathematics", "Winter", "2016", "Math");
	addCourse(ID, "MAC2200", "Calculus II", "Summer", "2016", "Math");
	addCourse(ID, "MAC2100", "Calculus I", "Fall", "2015", "Math");
	addCourse(ID, "MAC1200", "Precalculus", "Spring", "2015", "Math");
	addCourse(ID, "MAC1106", "Advanced Algebra", "Fall", "2013", "Math");
	addCourse(ID, "MAA3060", "Algorithm Analysis", "Fall", "2017", "Computer Science");
	addCourse(ID, "HUM2023", "Humanities (SUB)", "Winter", "2016", "Humanities");
	addCourse(ID, "GLY1000", "Introduction to Geology(SUB)", "Spring", "2016", "Science");
	addCourse(ID, "EVR3410", "Human Uses of the Environment (SUB)", "Fall", "2018", "Science");
	addCourse(ID, "ENC1121", "English Composition II", "Summer", "2015", "Writing");
	addCourse(ID, "ENC1101", "English Composition I", "Spring", "2015", "Writing");
	addCourse(ID, "ECO2013", "Macroeconomics (SUB)", "Fall", "2016", "Economics");
	addCourse(ID, "E242", "Career Development", "Summer", "2014", "Misc");
	addCourse(ID, "E185", "Freshman Seminar", "Winter", "2015", "Misc");
	addCourse(ID, "DIG3794", "Mobile Application Development", "Winter", "2019", "Computer Science");
	addCourse(ID, "COT1202", "Discrete Structures for Computer Science", "Winter", "2014", "Computer Science");
	addCourse(ID, "COP4222", "Computer Graphics Programming", "Winter", "2017", "Computer Science");
	addCourse(ID, "COP2323", "Object Oriented Programming", "Winter", "2014", "Computer Science");
	addCourse(ID, "COP2250", "Java I", "Fall", "2014", "Computer Science");
	addCourse(ID, "COP2224", "Programming II", "Winter", "2015", "Computer Science");
	addCourse(ID, "COP1224", "Programming I", "Summer", "2014", "Computer Science");
	addCourse(ID, "COP1000", "Fundamentals of Programming", "Fall", "2013", "Computer Science");
	addCourse(ID, "COM1002", "Introduction to Communication (SUB)", "Summer", "2015", "Communication");
	addCourse(ID, "CNT4121", "Network Systems Design", "Spring", "2018", "Computer Science");
	addCourse(ID, "CIS4010", "Senior Computer Science Capstone", "Summer", "2018", "Computer Science");
	addCourse(ID, "CGS1545", "Relational Databases", "Spring", "2014", "Computer Science");
	addCourse(ID, "CEN4411", "Advanced Mobile Application Development", "Spring", "2018", "Computer Science");
	addCourse(ID, "CEN4190", "Engineering Virtual Worlds", "Fall", "2017", "Computer Science");
	addCourse(ID, "CEN3410", "Software Systems Principles", "Spring", "2017", "Computer Science");
	addCourse(ID, "CEN3310", "Software Systems Engineering", "Winter", "2019", "Computer Science");
	addCourse(ID, "CEN3210", "Database Systems Design", "Winter", "2017", "Computer Science");
	addCourse(ID, "CEN1400", "Mobile Application Development", "Winter", "2015", "Computer Science");
	addCourse(ID, "CDA4120", "Simulation Analysis and Design", "Winter", "2018", "Computer Science");
	addCourse(ID, "CDA3225", "Operating Systems Design", "Summer", "2017", "Computer Science");
	addCourse(ID, "CDA3112", "Web Application Architecture and Design", "Spring", "2017", "Computer Science");
	addCourse(ID, "CDA2110", "Introduction to Computer Systems", "Fall", "2014", "Computer Science");
	addCourse(ID, "CDA1202", "Foundations of Software Design", "Spring", "2014", "Computer Science");
	addCourse(ID, "CAP4620", "Artificial Intelligence", "Fall", "2016", "Computer Science");
	addCourse(ID, "BGESS1", "Bachelor Gened Science 1(BGESS1)(Fulfilled by SYG4119)", "Spring", "2019", "Misc");
	addCourse(ID, "BGEH2", "Bachelor Gened Humanities 2 (Fulfilled by PHY4060)", "Fall", "2018", "Misc");
	addCourse(ID, "ART1204", "Art Appreciation (SUB)", "Spring", "2016", "Art");
}
