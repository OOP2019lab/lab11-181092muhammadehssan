#pragma once
#include"Basic.h"
#include"Faculty.h"
using namespace std;
#include<string>

class student:private basic
{
	float cgpa;
public:
	student();
	student(float);
	student(string,string,int,float);
	~student();
	void setcgpa(float);
	float getcgpa()const;
	void printstudent();
};