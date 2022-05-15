#pragma once
#include<iostream>
#include<string>
using namespace std;
class STAFF {
protected:
	string NAME;
	int DAY;
	int MONTH;
	int YEAR;
public:
	static int COUNT;
	static int getCount() {
		return COUNT;
	}
	void basicInput();
	void virtual Input() {};
	void virtual Output() {};
};
int STAFF::COUNT = 0;
class OFFICE :public STAFF {
	int workDay;
public:
	void Input();
	void Output();
};
class PRODUCE :public STAFF {
	int basicSalary;
	int product;
public:
	void Input();
	void Output();
};
