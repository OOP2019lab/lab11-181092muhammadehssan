#pragma once
#include<iostream>
using namespace std;
#include"Basic.h"
#include"Faculty.h"
#include"Student.h"

int main()
{
	student s1("Ted","Thompason",22,3.91);
	faculty f1("Richard","Karp",45,2,420);
	///////////////////output\\\\\\\\\\\\\\\\
	///*Constructor invoked for person:
	//Constructor  invoked for student
	//Constructor invoked for person:
	//In the  constructor of faculty:
	//Destructor of faculty:
	//Destructor invoked for persons
	//Destructor of student
	//Destructor invoked for persons
	//Press any key to continue . . .*/

	s1.printstudent();

	f1.printfaculty();




	return 0;
}


