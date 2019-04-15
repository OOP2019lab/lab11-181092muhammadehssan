
#include<string>

using namespace std;
#pragma once
class basic{
	string first_name;
	string last_name;
protected :
	int age;
public:
	basic();
	basic(string ,string,int);
	~basic();
	void setf_name(string);
	void setl_name(string);
	void setage(int);
	string getf_name()const;
	string getl_name()const;
	int getage()const;
	void printInformation();

};