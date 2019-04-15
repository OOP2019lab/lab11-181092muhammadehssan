#pragma once
#include"Basic.h"
#include"Student.h"

class faculty:private basic{
	int no_of_courses;
	int tele_exten;
public:
	faculty();
	faculty(int ,int);
	faculty(string,string,int,int ,int);
	~faculty();
	void set_courses(int);
	void set_extension(int);
	int get_courses()const;
	int get_extension()const;
	void printfaculty();


};