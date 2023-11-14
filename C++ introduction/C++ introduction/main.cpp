#include<iostream>
using namespace std;

//#include "test.h"
//int main()
//{
//	Func();
//	return 0;
//} 

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

// _Z3Addii
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//
//	return left + right;
//}

//// _Z3Adddd
//double Add(double left, double right);
////{
////	cout << "double Add(double left, double right)" << endl;
////
////	return left + right;
////}
//
//// _z1vic
//void f(int a, char b)
//{
//	//cout << "f(int a,char b)" << endl;
//}
//
//// _z1iic
////int f(int a, char b)
////{
////	//cout << "f(int a,char b)" << endl;
////}
//
//void f(char b, int a)
//{
//	//cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//	//Add(1, 2);     // call  _Z3Addii(0x313131310)
//	//Add(1.1, 2.2); // call  _Z3Adddd(0x313131320)
//
//	//f(1, 'x');
//	//f(1, 'x');
//
//
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

typedef struct Node
{
	struct Node* next;
	int val;
}Node, * PNode;

//void PushBack(Node*& phead, int x)
void PushBack(PNode& phead, int x)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (phead == nullptr)
	{
		phead = newNode;
	}
}

typedef struct SeqList
{
	int* a;
	int size;
	int capaicty;
}SQ;

void PushBack(SQ& s, int x)
{

}

int main()
{
	/*int i = 0, j = 1;
	Swap(i, j);

	cout << i << endl;
	cout << j << endl;

	int* p = &i;
	int*& rp = p;*/

	Node* plist = NULL;
	PushBack(plist, 1);
	PushBack(plist, 2);
	PushBack(plist, 3);

	return 0;
}