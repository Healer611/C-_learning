#include <iostream>
using namespace std;
// C++�Ƽ�
// const��enum����곣��
// inlineȥ����꺯��

// ��ȱ�㣺
// 1�����ܵ���
// 2��û�����Ͱ�ȫ�ļ��
// 3����Щ�����·ǳ�����,���׳�������������

// Ҫ��ʵ��ADD�꺯��
//#define ADD(int x, int y) return x+y;
//#define ADD(x, y) x+y;
//#define ADD(x, y) (x+y)
//#define ADD(x, y) (x)+(y)
//#define ADD(x, y) ((x)+(y));

//#define ADD(x, y) ((x)+(y))
////#define ADD(x, y) (x + y)
////#define ADD(x, y) (x)+(y)
////#define ADD(x, y) x+y
////�꺯���������Ͳ��̶�������Ҫ����ջ֡��
////�꺯��ֱ���滻�������溯��
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