#include <iostream>
#include <assert.h>
using namespace std;

//class Date
//{
//	//friend void operator<<(ostream& out, const Date& d);
//	friend ostream& operator<<(ostream& out, const Date& d);
//
//	friend istream& operator>>(istream& in, Date& d);
//
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//void operator<<(ostream& out)
//	//{
//	//	out << _year << "��" << _month << "��" << _day << "��" << endl;
//	//}
//	void Print()
//	{
//		cout<< _year << "��" << _month << "��" << _day << "��" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////void operator<<(ostream& out, const Date& d)
////{
////	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
////}
//
//void Test()
//{
//	Date a(2023, 11, 24);
//	a.Print();
//	cout << a;
//}
//
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "��" << d._month << "��" << d._day << "��" << endl;
//	return out;
//}
//void Test2()
//{
//	Date a(2023, 11, 24);
//	Date b(2023, 11, 25);
//	cout << a << b << endl;
//}
//
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//
//void Test3()
//{
//	Date d;
//	cin >> d;
//	cout << d;
//}
//int main()
//{
//	Test3();
//	return 0;
//}

//class A {
//public:
//	void Print() {
//		cout << _a << endl;
//	}
//private:
//	int _a = 1;
//};
//int main()
//{
//	A aa;
//	aa.Print();
//	return 0;
//}

//class A {
////const ���� *this
////this�����ͱ�� const A*
////�ڲ����ı��Ա�����ĳ�Ա����
////��ü���const��const�������ͨ���󶼿��Ե���
//
//public:
//	void Print() const
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a = 1;
//};
//int main()
//{
//	const A aa;
//	aa.Print();
//	return 0;
//}


//class Array
//{
//public:
//	int& operator[](int i)
//	{
//		assert(i < 10);
//
//		return _a[i];
//	}
//
//	const int& operator[](int i) const
//	{
//		assert(i < 10);
//
//		return _a[i];
//	}
//private:
//	int _a[10];
//	int _size;
//};
//
//void Func(const Array& aa)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		//aa[i]++;
//		cout << aa[i] << " ";
//	}
//}

//int main()
//{
//	Array a;
//	//for (int i = 0; i < 10; ++i)
//	//{
//	//	a[i] = i;
//	//}
//
//	for (int i = 0; i < 10; ++i)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	Func(a);
//
//	return 0;
//}


//class A
//{
//public:
//	int _a1;//����������
//	int _a2;
//	void Print()
//	{
//		cout << _a1 << endl << _a2 << endl;
//	}
//};
//
//int main()
//{
//	A aa;//
//	aa.Print();
//	return 0;
//}
// 
// 
////////////////////////////////////////////////////
//class A {
//public:
//	A()
//		:_x(1)
//	{}
//private:
//	int _a1;
//	int _a2;
//	const int _x;
//};
//int main()
//{
//	A a;
//	return 0;
//}
//1���ĸ�������ù����������ʼ���б��������г�Ա���������λ��
// 2�������Ƿ���ʾ�ڳ�ʼ���б�д����ô������ÿ�����������ʼ���б����ʼ��
////
//class A {
//public:
//	A()
//		:_x(1),_a1(6)
//	{}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//	const int _x;
//};
//int main()
//{
//	A a;
//	return 0;
//}

//class B {
//public:
//	B(int n=9) :_b(0)
//	{
//		cout << "B()" << endl;
//	}
//private:
//	int _b;
//};
//
//class A {
//private:
//	B _bb;
//};
//int main()
//{
//	A aa;
//	return 0;
//}

//class B {
//public:
//	B():_b(0)
//	{
//		cout << "B()" << endl;
//	}
//private:
//	int _b;
//};
//
//class A {
//public:
//	A() :_x(1), _a2(1), _ref(_a1)
//	{
//		_a1++;
//		_a2--;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//	const int _x;
//	int& _ref;
//	B _bb;
//};
//int main()
//{
//	A aa;
//	return 0;
//}


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
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	Stack(const Stack& st)
//	{
//		cout << "Stack(const Stack& st)" << endl;
//		_array = (DataType*)malloc(sizeof(DataType)*st._capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc����ռ�ʧ��");
//			exit(-1);
//		}
//
//		memcpy(_array, st._array, sizeof(DataType)*st._size);
//		_size = st._size;
//		_capacity = st._capacity;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//
//private:
//	DataType *_array;
//	size_t    _size;
//	size_t    _capacity;
//};
//
//class MyQueue
//{
//public:
//	//MyQueue(int pushN, int popN)
//	//	:_pushST(pushN)
//	//	, _popST(popN)
//	//{}
//
//	MyQueue()
//	{}
//
//private:
//	Stack _pushST;
//	Stack _popST;
//	int _size = 0;
//};
//
//int main()
//{	
//	//MyQueue q(2, 3);
//	MyQueue q;
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main() {
//	A aa(1);
//	aa.Print();
//}

//class A {
//public:
//	A(int a):_a1(a)
//	{}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main()
//{
//	A aa1(1);	//���캯��
//	A aa2 = 1;	//��ʽ����ת��
//	int i = 1;	
//	double d = i;//��ʽ����ת��
//	return 0;
//}

// �������Ĺ��캯��
//class A
//{
//public:
//	//explicit A(int a)
//	A(int a)
//		:_a1(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//
//	//explicit A(int a1, int a2)
//	A(int a1, int a2)
//		:_a1(a1)
//		, _a2(a2)
//	{}
//
//	A(const A& aa)
//		:_a1(aa._a1)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//
//private:
//	int _a2;
//	int _a1;
//};
//int main()
//{
//	// ���������캯�� C++98
//	A aa1(1);	//���캯��
//	A aa2 = 1;	//��ʽ����ת��
//	const A& ref = 10;
//
//	int i = 1;
//	double d = i;//��ʽ����ת��
//
//
//	// ��������캯�� C++11
//	A aa2(1, 1);
//	A aa3 = { 2, 2 };
//	const A& ref = { 2, 2 };
//	return 0;
//}

