#pragma once
#include<iostream>
#include"Basic.h"
#include"Faculty.h"
using namespace std;
#include<string>
student::student()
{
	cgpa=0.0;
	cout<<"Constructor 1 invoked for student"<<endl;
}
student::student(float cg)
{
	this->cgpa=cg;
	cout<<"Constructor 2 invoked for student"<<endl;
}
student::student(string f_name,string l_name,int ag,float cg):basic(f_name,l_name,ag)
{
	this->cgpa=cg;
	cout<<"Constructor  invoked for student"<<endl;
}
student::~student()
{
	cout<<"Destructor of student "<<endl;
}
void student::setcgpa(float a)
{
	this->cgpa=a;
}
float student::getcgpa()const
{
	return this->cgpa;
}
void student::printstudent()
{
	cout<<getf_name()<< " "<<getl_name()<<" is "<<this->age<<" years old, his cgpa is "<<this->getcgpa()<<endl;
	this->printInformation();


}