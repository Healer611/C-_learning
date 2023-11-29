#include <iostream>
using namespace std;

//int main()
//{
//	int* pp1 = (int*)malloc(sizeof(int));
//	int* p1 = new int;
//
//	int* pp2 = (int*)malloc(sizeof(int) * 10);
//	int* p2 = new int[10];
//
//	return 0;
//}

//int main()
//{
//	int* pp1 = (int*)malloc(sizeof(int));
//	int* p1 = new int;
//
//	free(pp1);
//	delete p1;
//
//	int* pp2 = (int*)malloc(sizeof(int) * 10);
//	int* p2 = new int[10];
//
//	free(pp2);
//	delete[] p2;
//
//	return 0;
//}
// 
// 
// 
//class a
//{
//public:
//	a(int a = 0)
//		: _a(a)
//	{
//		cout << "a():" << this << endl;
//	}
//
//	~a()
//	{
//		cout << "~a():" << this << endl;
//	}
//
//private:
//	int _a;
//};
//struct ListNode
//{
//	int _val;
//	ListNode* _next;
//
//	ListNode(int val)
//		:_val(val)
//		, _next(nullptr)
//	{}
//};
//ListNode BuyListNode(int x)
//{
//	//...
//}
//int main()
//{
//	A* pp3 = (A*)malloc(sizeof(A));
//	free(pp3);
//
//	A* p3 = new A(1);
//	delete p3;
//
//	return 0;                                                                             	return 0;
//}

//int main()
//{
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//
//	return 0;
//}

//int main()
//{
//	//int* p1 = new int;  // 不会初始化
//	int* p1 = new int(10);// 申请一个int，初始化10
//	int* p2 = new int[10];// 申请10个int的数组
//	int* p4 = new int[10] {1, 2, 3, 4};
//
//	return 0;
//}

//int main()
//{
//	int* p1 = (int*)operator new(sizeof(int*));
//
//	//申请空间，调用构造函数
//
//	// 失败了抛异常
//	int* p1 = (int*)operator new(sizeof(int*));
//
//	// 失败返回nullptr
//	int* p2 = (int*)malloc(sizeof(int*));
//	if (p2 == nullptr)
//	{
//		perror("malloc fail");
//	}
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		: _a(a)
//	{
//		cout << "A():" << endl;
//	}
//
//	~A()
//	{
//		cout << "~A():" << endl;
//	}
//private:
//	int _a;
//};
//class Stack
//{
//public:
//	Stack()
//	{
//		cout << "Stack()" << endl;
//		_a = new int[4];
//		_top = 0;
//		_capacity = 4;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete[] _a;
//		_top = _capacity = 0;
//	}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};

//int main()
//{
//	// 失败了抛异常
//	//int* p1 = (int*)operator new(sizeof(int*));
//
//	//// 失败返回nullptr
//	//int* p2 = (int*)malloc(sizeof(int*));
//	//if (p2 == nullptr)
//	//{
//	//	perror("malloc fail");
//	//}
//
//	//// 申请空间 operator new -> 封装malloc
//	//// 调用构造函数
//	//A* p5 = new A;
//	//cout << endl;
//
//	//// 先调用析构函数
//	//// 再operator delete p5指向的空间
//	//// operator delete -> free
//	//delete p5;
//	//cout << endl;
//
//	//// 申请空间 operator new[] ->perator new-> 封装malloc
//	//// 调用10次构造函数
//	//A* p6 = new A[10];
//	//cout << endl;
//
//	//// 先调用10次析构函数
//	//// 再operator delete[] p6指向的空间
//	//delete[] p6;
//	//cout << endl;
//
//	//int* p7 = new int[10];
//	//free(p7);  // 正常释放
//
//	//A* p8 = new A;
//	//free(p8); // 少调用的析构函数
//	//cout << endl;
//	//delete p8;
//
//	Stack st;//自定义类型调用构造和析构
//	//cout << endl;
//	
//	Stack* pst = new Stack;//指针是内置类型
//	delete pst;
//	//free(pst); // 少调用了析构函数 -- 有内存泄漏
//
//	// 结论：new/malloc系列 有底层实现机制有关联交叉。不匹配使用
//	// 可能有问题，可能没问题，建议大家一定匹配使用
//
//	//A* p9 = new A[10];
//	////free(p9);
//	////delete p9;
//	//delete[] p9;
//
//	return 0;
//}

