#include <iostream>
using namespace std;

class Stack
{
public:
	Stack()
	{
		cout << "Stack()" << endl;
		_a = nullptr;
		_size = _capacity = 0;
	}

	Stack(int n)
	{
		cout << "Stack()" << endl;
		_a = (int*)malloc(sizeof(int) * n);
		if (_a == nullptr)
		{
			perror("malloc fail");
			return;
		}
		_capacity = n;
		_size = 0;
	}
	//void Init(int n)
	//{
	//	a = (int*)malloc(sizeof(int) * n);
	//	if (a == nullptr)
	//	{
	//		perror("malloc fail");
	//		return;
	//	}
	//	_capacity = n;
	//	_size = 0;
	//}

	void Push(int x)
	{
		//....
		_a[_size++] = x;
	}

	bool Empty()
	{
		// ...
		return _size == 0;
	}

	int Top()
	{
		//...
		return _a[_size - 1];
	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		free(_a);
		_a = nullptr;
		_size = _capacity = 0;
	}

private:
	int* _a;
	int _size;
	int _capacity;
};
//int main()
//{
//	Stack st;
//	//Stack st(4);
//	//st.Destroy();由析构函数代替
//	return 0;
//}
//int main()
//{
//	//Stack st;//无参有括号报错，容易与函数声明混淆
//	Stack st(4);
//
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//
//	//st.Destroy();
//
//	return 0;
//}

//class Date
//{
//public:
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	//
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//缺省代替上述函数重载
//	Date(int year = 1, int month = 1, int day = 1)
//	{//不能与无参的同时存在，编译能通过但有警告，会产生歧义，程序不知道调用哪个。
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(2023, 2, 3);
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}

//class Date
//{
//public:
//	// 默认生成构造函数，对内置类型不处理
//	// 默认生成析构函数，对内置类型不处理
//	//Date(int year = 0, int month = 1, int day = 1)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	void Print()
//	{
//		//cout << _year << "/" << _month << "/" << _day << endl;
//		cout << _year << "年" << _month << "月" << _day << "日" << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	// 基本类型/内置类型
//	
//	// 声明位置给的缺省值
//	//int _year = 1;
//	//int _month = 1;
//	//int _day = 1;
//};
////
//class MyQueue {
//public:
//	// 默认生成构造函数，对自定义类型成员，会调用他的默认构造函数
//	// 默认生成析构函数，对自定义类型成员，会调用他的析构函数
//
//	void push(int x) {
//
//	}
//	//....
//
//	Stack _pushST;
//	Stack _popST;
//	int _size = 0;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	MyQueue q;
//
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	
//	// 拷贝构造
//	// Date d2(d1);
//	Date(const Date& d)
//	{
//		cout << "Date(Date& d)" << endl;
//
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//
//		/*d._year = _year;
//		d._month = _month;
//		d._day = _day;*/
//	}
//
//	// 构造函数
//	//Date(const Date* d)
//	//{
//	//	cout << "Date(Date& d)" << endl;
//
//	//	_year = d->_year;
//	//	_month = d->_month;
//	//	_day = d->_day;
//
//	//	/*d._year = _year;
//	//	d._month = _month;
//	//	d._day = _day;*/
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// 传值传参
//// 内置类型，编译器可以直接拷贝
//// 自定义类型的拷贝，需要调用拷贝构造
//void Func1(Date d)
//{
//
//}
//
//// 传引用传参
//void Func2(Date& d)
//{
//
//}
//
//void Func3(Date* d)
//{
//
//}
//
//int main()
//{
//	Date d1(2023, 2, 3);
//	Date d2(d1);
//	Date d3 = d1;
//
//	//Date d4(&d1);
//	//Date d5 = &d1;
//
//	Func1(d1);
//	Func2(d1);
//	Func3(&d1);
//
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// 拷贝构造
//	// Date d2(d1);
//	Date(Date& d)
//	{
//
//		d._year = _year;
//		d._month = _month;
//		d._day = _day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// 传值传参
//// 内置类型，编译器可以直接拷贝
//// 自定义类型的拷贝，需要调用拷贝构造
//void Func1(Date d)
//{
//
//}
//
//// 传引用传参
//void Func2(Date& d)
//{
//
//}
//
//void Func3(Date* d)
//{
//
//}
//int main()
//{
//	Date d1(2023, 2, 3);
//	Date d2(d1);
//	//Date d3 = d1;
//	
//	//Date d4(&d1);
//	//Date d5 = &d1;
//
//	//Func1(d1);
//	
//	
//	//Func2(d1);
//
//	//Func3(&d1);
//
//	return 0;
//}
//
//
#include <assert.h>
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// 拷贝构造
	// Date d2(d1);
	Date(const Date& d)
	{
		cout << "Date(Date& d)" << endl;

		_year = d._year;
		_month = d._month;
		_day = d._day;

		/*d._year = _year;
		d._month = _month;
		d._day = _day;*/
	}

	int GetMonthDay(int year, int month)
	{
		assert(month > 0 && month < 13);

		int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400) == 0))
		{
			return 29;
		}
		else
		{
			return monthArray[month];
		}
	}

	// d1.GetAfterXDay(100);
	//Date GetAfterXDay(int x)
	//{
	///*	Date tmp;
	//	tmp._year = _year;
	//	tmp._month = _month;
	//	tmp._day = _day;*/
	//	//Date tmp(*this);
	//	Date tmp = *this;

	//	tmp._day += x;
	//	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	//	{
	//		// 进位
	//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
	//		++tmp._month;
	//		if (tmp._month == 13)
	//		{
	//			tmp._year++;
	//			tmp._month = 1;
	//		}
	//	}

	//	return tmp;
	//}

	// +
	Date Add(int x)
	{
		Date tmp = *this;
		tmp._day += x;
		while (tmp._day > GetMonthDay(tmp._year, tmp._month))
		{
			// 进位
			tmp._day -= GetMonthDay(tmp._year, tmp._month);
			++tmp._month;
			if (tmp._month == 13)
			{
				tmp._year++;
				tmp._month = 1;
			}
		}

		return tmp;
	}

	// +=
	Date& AddEqual(int x)
	{
		_day += x;
		while (_day > GetMonthDay(_year, _month))
		{
			// 进位
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}

		return *this;
	}

	void Print()
	{
		//cout << _year << "/" << _month << "/" << _day << endl;
		cout << _year << "年" << _month << "月" << _day << "日" << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2023, 2, 3);
	Date d2 = d1.Add(100);
	Date d3 = d1.Add(150);

	d1.Print();
	d2.Print();
	d3.Print();

	d1.AddEqual(200);
	d1.Print();

	// 实现一个函数，获取多少以后的一个日期

	return 0;
}