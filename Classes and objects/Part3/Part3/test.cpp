#include <iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		cout << "Stack(size_t capacity = 10)" << endl;
//
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc����ռ�ʧ��");
//			exit(-1);
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	Stack(const Stack& st)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * st._capacity);
//		if (_array == nullptr)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//		memcpy(_array, st._array, sizeof(DataType) * st._size);
//		_size = st._size;
//		_capacity = st._capacity;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	size_t    _size;
//	size_t    _capacity;
//};
//
//class MyQueue
//{
//public:
//	// Ĭ�����ɹ���
//	// Ĭ����������
//	// Ĭ�����ɿ�������
//
//private:
//	Stack _pushST;
//	Stack _popST;��������
//	int _size = 0;//ȱʡֵ����
//};

//int main()
//{
//	Date d1(2023, 11, 20);
//	d1.Print();
//	Date d2(d1);
//	d2.Print();
//
//	Stack st1;
//	Stack st2(st1);//����������
//
//	return 0;
//}


// ���������
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	// d1 == d2  -��  d1.operator==(d2)
	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

	// d1 < d2
	bool operator<(const Date& d)
	{
		if (_year < d._year)
		{
			return true;
		}
		else if (_year == d._year && _month < d._month)
		{
			return true;
		}
		else if (_year == d._year && _month == d._month && _day < d._day)
		{
			return true;
		}
		else
		{
			return false;
		}

		//return _year < d._year
		//	|| (_year == d._year && _month < d._month)
		//	|| (_year == d._year && _month == d._month && _day < d._day);
	}

	// d1 <= d2
	bool operator<=(const Date& d)
	{
		return *this < d || *this == d;
	}

	// d1 > d2
	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}

	bool operator>=(const Date& d)
	{
		return !(*this < d);
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	// ����ֵΪ��֧��������ֵ�����������������
	// d3 = d1 = d2;
	// d1 = d1
	// 17:15����
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	//void operator=(const Date& d)
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}
private:
	int _year;
	int _month;
	int _day;
};

//bool operator==(const Date& d1, const Date& d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}
int main()
{
	Date d1(2023, 6, 6);
	Date d2(1, 1, 1);
	Date d3;
	//operator==(d1, d2);
	//d1 == d2;//��������ת����ȥ����operator==(d1,d2);
	//cout << (d1 == d2) << endl;
	//cout << operator==(d1, d2) << endl;

	d3 = d2 = d1;
	d1.Print();
	d2.Print();
	return 0;
}