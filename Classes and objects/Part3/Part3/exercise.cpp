#include <iostream>
using namespace std;

class Date
{
public:
	Date(int year = 0, int month = 0, int day = 0)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	Date(const Date& d) {
		d
	}
private:
	int _year;
	int _month;
	int _day;
};





