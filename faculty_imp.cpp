#pragma once
#include"Basic.h"
#include"Student.h"
#include<iostream>
using namespace std;

faculty::faculty():no_of_courses(0),tele_exten(0)
{
	cout<<"In constructor 1 of faculty"<<endl;
	
}
faculty::faculty(int a,int b):no_of_courses(a),tele_exten(b)
{
	cout<<"In constructor 2 of faculty"<<endl;
}
faculty::faculty(string f_name,string l_name,int ag,int a ,int b):basic(f_name,l_name,ag),no_of_courses(a),tele_exten(b)
{

	cout<<"In the  constructor of faculty:"<<endl;
}
faculty::~faculty()
{
	cout<<"Destructor of faculty: "<<endl;
}
void faculty::set_courses(int a)
{
	this->no_of_courses=a;
}
void faculty::set_extension(int a)
{
	this->tele_exten=a;
}
int faculty::get_extension()const
{
	return this->tele_exten;
}
int faculty::get_courses()const
{
	return this->no_of_courses;
}
void faculty::printfaculty()
{
	cout<<"Faculty member name : "<<getf_name()<<" "<<getl_name()<<", Age "<<this->age<<", Number of courses"<<this->no_of_courses<<" Ext no. "<<this->tele_exten<<endl;
}