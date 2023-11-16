#include <iostream>
#include <assert.h>
using namespace std;

//#include "test.h"
//int main()
//{
//	Func();
//	return 0;
//} 
// 1、参数类型不同
//int add(int a, int b)
//{
//	cout << a + b << endl;
//	return 0;
//}
//
//double add(double a, double b)
//{
//	cout << a + b << endl;
//	return 0;
//}
//int main()
//{
//	add(2, 3);
//	add(2.2, 3.3);
//	return 0;
//}
// 2、参数个数不同
//void f(int a,int b)
//{
//	cout << a+b << endl;
//}
//void f(int a)
//{
//	cout << a << endl;
//}
//int main()
//{
//	f(6+6);
//	f(6);
//	return 0;
//}

// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << a << b << endl;
//}
//void f(char b, int a)
//{
//	cout << b << a <<endl;
//}
//int main()
//{
//	f('a', 6);
//	f(6, 'a');
//	return 0;
//}

//// _Z3Addii
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//
//	return left + right;
//}
//
////// _Z3Adddd
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//
//	return left + right;
//}
//
//int main()
//{
//	Add(1, 2);     
//	Add(1.1, 2.2); 
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int& k = i;//引用
//
//	int j = i;
//
//	//cout << &i << endl;
//	//cout << &k << endl;
//	//cout << &j << endl;
//
//	k++;
//	j++;
//	cout << i << " " << k << " " << j << endl;
//
//	int& m = i;
//	int& n = k;
//	++n;
//
//	return 0;
//}
//void Swap(int* i, int* j)
//{
//	int tmp = *i;
//	*i = *j;
//	*j = tmp;
//}
//void _Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int i = 0, j = 1;
//	//Swap(&i, &j);
//	//printf("i=%d,j=%d\n", i, j);
//	_Swap(i, j);
//	printf("i=%d,j=%d\n", i, j);
//	return 0;
//}

//typedef struct Node
//{
//	struct Node* next;
//	int val;
//}Node, * PNode;
//
//void PushBack(Node*& phead, int x)
////void PushBack(PNode& phead, int x)
//{
//	Node* newNode = (Node*)malloc(sizeof(Node));
//	if (phead == nullptr)
//	{
//		phead = newNode;
//	}
//}
//
//typedef struct SeqList
//{
//	int* a;
//	int size;
//	int capaicty;
//}SQ;
//
//void PushBack(SQ& s, int x)
//{
//
//}
//
//int main()
//{
//	/*int i = 0, j = 1;
//	Swap(i, j);
//
//	cout << i << endl;
//	cout << j << endl;
//
//	int* p = &i;
//	int*& rp = p;*/
//
//	Node* plist = NULL;
//	PushBack(plist, 1);
//	PushBack(plist, 2);
//	PushBack(plist, 3);
//
//	return 0;
//}

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}
// 
//void PushBack(PNode& phead, int x)


// 1、做参数
// 输出型参数
// 形参的改变，影响实参

// 2、做返回值
int& Count()
{
	static int n = 0;
	n++;

	return n;
}

//#define N 10
//typedef struct Array
//{
//	int a[N];
//	int size;
//}AY;
//
//// 引用返回
//// 1、减少拷贝
//// 2、调用者可以修改返回对象
//int& PosAt(AY& ay, int i)
//{
//	assert(i < N);
//
//	return ay.a[i];
//}
//
//int main()
//{
//	int ret = Count();
//
//	AY ay;
//	for (int i = 0; i < N; ++i)
//	{
//		PosAt(ay, i) = i*10;
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << PosAt(ay, i) << " ";
//	}
//	cout << endl;
//	
//
//	return 0;
//}

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	cout << "Add(1, 2) is :" << ret << endl;
//
//	return 0;
//}

//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//
//	return 0;
//}