#include <iostream>
using namespace std;
// C++推荐
// const和enum替代宏常量
// inline去替代宏函数

// 宏缺点：
// 1、不能调试
// 2、没有类型安全的检查
// 3、有些场景下非常复杂,容易出错，不容易掌握

// 要求实现ADD宏函数
//#define ADD(int x, int y) return x+y;
//#define ADD(x, y) x+y;
//#define ADD(x, y) (x+y)
//#define ADD(x, y) (x)+(y)
//#define ADD(x, y) ((x)+(y));

//#define ADD(x, y) ((x)+(y))
////#define ADD(x, y) (x + y)
////#define ADD(x, y) (x)+(y)
////#define ADD(x, y) x+y
////宏函数参数类型不固定，不需要建立栈帧。
////宏函数直接替换，不是真函数
//int main()
//{
//	ADD(1, 2) * 3; // ((1)+(2))*3;
//
//	int a = 1, b = 2;
//	ADD(a | b, a & b); // ((a | b) + (a & b));;
//
//	return 0;
//}
inline int Add(int x, int y)
{
	int z = x + y;
	return z;
}
//inline int Add(int x, int y)
//{
//	int z = x + y;
//	z = x + y;
//	z += x + y;
//	//z = x + y;
//	//z = x + y;
//	//z = x * y;
//	//z = x + y;
//	//z += x + y;
//	//z -= x + y;
//	//z += x + y;
//	//z += x * y;
//	//z -= x / y;
//	//z += x + y;
//	//z += x + y;
//
//	return z;
//}
//
//int main()
//{
//	int ret = Add(1, 2);
//	cout << ret << endl;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	auto b = a;
//	auto c = &a;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	auto b = &a;
//	auto* c = &a;
//	auto& d = a;
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//	for (auto& e : a)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}