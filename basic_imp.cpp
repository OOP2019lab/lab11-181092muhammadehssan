#pragma once
#include<iostream>
#include<string>
#include"Faculty.h"
#include"Student.h"
using namespace std;
basic::basic()
{
	this->first_name="";
	this->last_name="";
	this->age=-1;
	cout<<"Constructor 1 invoked for basic"<<endl;
}
basic::basic(string f_name,string l_name,int ag)
{
	this->first_name=f_name;
	this->last_name=l_name;
	this->age=ag;
	cout<<"Constructor invoked for person: "<<endl;	

}
basic::~basic()
{
	cout<<"Destructor invoked for persons"<<endl;
}
void basic::setf_name(string f_name)
{
	this->first_name=f_name;
}
void basic::setl_name(string l_name)
{
	this->last_name=l_name;
}
void basic::setage(int ag)
{
	this->age=ag;
}
string basic::getf_name()const
{
	return this->first_name;
}
int basic::getage()const
{
	return age;
}
string basic::getl_name()const
{
	return this->last_name;
}
void basic::printInformation()
{
	cout<<this->first_name<<" "<<this->last_name<<" is "<<this->age<<" years old"<<endl;
}