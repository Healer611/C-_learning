#include <iostream>
using namespace std;

class Stack
{
public:
	Stack()
	{
		_a = nullptr;
		_size = _capacity = 0;
	}

	Stack(int n)
	{
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

//int main()
//{
//	Date d1;
//	Date d2(2023, 2, 3);
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}

​