#include <iostream>
using namespace std;

// C++兼容C结构体用法
//typedef struct ListNode
//{
//	int val;
// //C struct ListNode是类型
//	struct ListNode* next;
//}LTN;
//
//// C++把结构体升级成了类
//struct ListNode
//{
//	int val;
// //C++ ListNode是类型
//	ListNode* next;
//};

//成员函数和成员变量定义在类中的位置没有要求，
// 在调用时会在整个类中查找，不会像类之外使用变量或函数时，编译器只会向上查找。
//struct Stack
//{
//	// 成员函数直接定义到类里面
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
//	// 成员变量
//	int* a;
//	int size;
//	int capacity;
//};

/*如何定义与声明分离？*/

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

//实例化
//对象大小要考虑内存对齐规则

//class Date
//{
//public:
//	// 定义
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
////private:
//	int _year;  // 声明
//	int _month;
//	int _day;
//};
//
//class A2 {
//public:
//	void f2() {}
//};
//
//// 类中什么都没有---空类
//class A3
//{};
//
//int main()
//{
//	// 类对象实例化 -- 开空间
//	// 实例化 -- 用设计图建造一栋栋别墅
//	Date d1;
//	Date d2;
//
//	// 为什么成员变量在对象中，成员函数不在对象中呢？
//	// 每个对象成员变量时不一样的，需要独立存储
//	// 每个对象调用成员函数是一样的，放到共享公共区域(代码段）
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
//	//实例化就能打印地址
//	cout << &aa1 << endl;
//	cout << &aa2 << endl;
//	// 大小是1，这1byte不存储有效数据
//	// 占位，标识对象被实例化定义出来了。
//	cout << sizeof(aa1) << endl;
//
//	return 0;
//}


//class Date
//{
//public:
//	// 定义
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
//	int _year;  // 声明
//	int _month;
//	int _day;
//};
//
//// 1、this存在哪里？-- 栈，因为他是隐含形参 / vs下面是通过ecx寄存器
//// 2、空指针问题
//int main()
//{
//	//Date d1;
//	//Date d2;
//	//d1.Init(2022, 2, 2);
//	//d2.Init(2023, 2, 2);
//
//	//// 编译报错  运行崩溃   正常运行
//	Date* ptr = nullptr;
//	ptr->Init(2022, 2, 2); // 运行崩溃
//
//	//ptr->func();           // 正常运行
//	//(*ptr).func();           // 正常运行
//
//	return 0;
//}



class Date
{
public:
	void Init(int year, int month, int day)
	{
		cout << this << endl;
		//可以显式使用this，不能显式定义this
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