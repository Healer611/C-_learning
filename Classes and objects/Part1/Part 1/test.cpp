#include <iostream>
using namespace std;

// C++����C�ṹ���÷�
//typedef struct ListNode
//{
//	int val;
// //C struct ListNode������
//	struct ListNode* next;
//}LTN;
//
//// C++�ѽṹ������������
//struct ListNode
//{
//	int val;
// //C++ ListNode������
//	ListNode* next;
//};

//��Ա�����ͳ�Ա�������������е�λ��û��Ҫ��
// �ڵ���ʱ�����������в��ң���������֮��ʹ�ñ�������ʱ��������ֻ�����ϲ��ҡ�
//struct Stack
//{
//	// ��Ա����ֱ�Ӷ��嵽������
//	void Init(int n = 4)
//	{
//		a = (int*)malloc(sizeof(int) * n);
//		if (nullptr == a)
//		{
//			perror("malloc fail");
//			return;
//		}
//		capacity = n;
//		size = 0;
//	}
//	void Push(int x)
//	{
//		//...
//		a[size++] = x;
//	}
//		
//	// ��Ա����
//	int* a;
//	int size;
//	int capacity;
//};

/*��ζ������������룿*/

//#include "Stack.h"
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	
//	//Date d1;
//	//d1.Init(2023, 2, 3);
//	return 0;
//}

//ʵ����
//�����СҪ�����ڴ�������

//class Date
//{
//public:
//	// ����
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
////private:
//	int _year;  // ����
//	int _month;
//	int _day;
//};
//
//class A2 {
//public:
//	void f2() {}
//};
//
//// ����ʲô��û��---����
//class A3
//{};
//
//int main()
//{
//	// �����ʵ���� -- ���ռ�
//	// ʵ���� -- �����ͼ����һ��������
//	Date d1;
//	Date d2;
//
//	// Ϊʲô��Ա�����ڶ����У���Ա�������ڶ������أ�
//	// ÿ�������Ա����ʱ��һ���ģ���Ҫ�����洢
//	// ÿ��������ó�Ա������һ���ģ��ŵ�����������(����Σ�
//	d1.Init(2023, 2, 2);
//	d1._year++;
//
//	d2.Init(2022, 2, 2);
//	d2._year++;
//
//	cout << sizeof(d1) << endl;
//
//	A2 aa1;
//	A2 aa2;
//	//ʵ�������ܴ�ӡ��ַ
//	cout << &aa1 << endl;
//	cout << &aa2 << endl;
//	// ��С��1����1byte���洢��Ч����
//	// ռλ����ʶ����ʵ������������ˡ�
//	cout << sizeof(aa1) << endl;
//
//	return 0;
//}


//class Date
//{
//public:
//	// ����
//	void Init(int year, int month, int day)
//	{
//		/*_year = year;
//		_month = month;
//		_day = day;*/
//		cout << this << endl;
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//
//	void func()
//	{
//		//cout << this << endl;
//		cout << "func()" << endl;
//	}
//
////private:
//	int _year;  // ����
//	int _month;
//	int _day;
//};
//
//// 1��this�������-- ջ����Ϊ���������β� / vs������ͨ��ecx�Ĵ���
//// 2����ָ������
//int main()
//{
//	//Date d1;
//	//Date d2;
//	//d1.Init(2022, 2, 2);
//	//d2.Init(2023, 2, 2);
//
//	//// ���뱨��  ���б���   ��������
//	Date* ptr = nullptr;
//	ptr->Init(2022, 2, 2); // ���б���
//
//	//ptr->func();           // ��������
//	//(*ptr).func();           // ��������
//
//	return 0;
//}



class Date
{
public:
	void Init(int year, int month, int day)
	{
		cout << this << endl;
		//������ʽʹ��this��������ʽ����this
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}

	void func()
	{
		cout << "func()" << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date* ptr = nullptr;
	//ptr->func();

	//ptr->Init(2022, 2, 2);
	(*ptr).func();
	return 0;
}