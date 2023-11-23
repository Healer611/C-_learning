#pragma once
#include <iostream>
#include <assert.h>
using namespace std;

class Date {
public:
	Date(int year = 0, int month = 0, int day = 0);
	void Print();
	int GetMonthDay(int year, int month);

	bool operator==(const Date& d);
	bool operator!=(const Date& d);
	bool operator< (const Date& d);
	bool operator<=(const Date& d);
	bool operator> (const Date& d);
	bool operator>=(const Date& d);

	Date& operator+=(int day);
	Date operator+(int day);
	
	Date& operator-=(int day);

	// d1 - 100
	Date operator-(int day);

	// d1 - d2;
	int operator-(const Date& d);

	// ++d1
	Date& operator++();

	// d1++
	Date operator++(int);
	
	Date& operator--();

	Date operator--(int);

private:
	int _year;
	int _month;
	int _day;
};