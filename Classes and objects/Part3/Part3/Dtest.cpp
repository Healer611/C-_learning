#include "Date.h"

void TestDate1()
{
	Date d1(2023, 2, 4);
	cout << d1.GetMonthDay(2022,12) << endl;
	//d1.Print();

	//Date d2 = d1 + 100;
	//d2.Print();
}

void TestDate2()
{
	Date d1(2023, 2, 4);
	d1.Print();

	Date d2 = d1 + 100;
	d2.Print();

	Date d3 = d1 + 100;
	d3.Print();
}

void TestDate3()
{
	Date d1(2023, 6, 6);
	d1.Print();

	Date ret1 = ++d1;  // d1.operator++();
	d1.Print();
	ret1.Print();

	Date ret2 = d1++;  // d1.operator++(0);
	d1.Print();
	ret2.Print();


	/*d1.operator++();
	d1.operator++(0);*/
}

void TestDate4()
{
	//Date d1(2023, 2, 4);
	//d1.Print();

	//d1 -= 100;
	//d1.Print();

	Date d2(2023, 6, 6);
	d2.Print();
	d2 += -100;
	d2.Print();

	Date d3(2023, 7, 7);
	d3.Print();
	d3 -= -200;
	d3.Print();
}
void TestDate5()
{
	Date d1(2024, 1, 12);
	d1.Print();

	Date d2(2023, 11, 23);
	d2.Print();

	cout << d2 - d1 << endl;
	cout << d1 - d2 << endl;
}
int main()
{
	TestDate5();
	return 0;
}