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
//	//int* p1 = new int;  // �����ʼ��
//	int* p1 = new int(10);// ����һ��int����ʼ��10
//	int* p2 = new int[10];// ����10��int������
//	int* p4 = new int[10] {1, 2, 3, 4};
//
//	return 0;
//}

//int main()
//{
//	int* p1 = (int*)operator new(sizeof(int*));
//
//	//����ռ䣬���ù��캯��
//
//	// ʧ�������쳣
//	int* p1 = (int*)operator new(sizeof(int*));
//
//	// ʧ�ܷ���nullptr
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
//	// ʧ�������쳣
//	//int* p1 = (int*)operator new(sizeof(int*));
//
//	//// ʧ�ܷ���nullptr
//	//int* p2 = (int*)malloc(sizeof(int*));
//	//if (p2 == nullptr)
//	//{
//	//	perror("malloc fail");
//	//}
//
//	//// ����ռ� operator new -> ��װmalloc
//	//// ���ù��캯��
//	//A* p5 = new A;
//	//cout << endl;
//
//	//// �ȵ�����������
//	//// ��operator delete p5ָ��Ŀռ�
//	//// operator delete -> free
//	//delete p5;
//	//cout << endl;
//
//	//// ����ռ� operator new[] ->perator new-> ��װmalloc
//	//// ����10�ι��캯��
//	//A* p6 = new A[10];
//	//cout << endl;
//
//	//// �ȵ���10����������
//	//// ��operator delete[] p6ָ��Ŀռ�
//	//delete[] p6;
//	//cout << endl;
//
//	//int* p7 = new int[10];
//	//free(p7);  // �����ͷ�
//
//	//A* p8 = new A;
//	//free(p8); // �ٵ��õ���������
//	//cout << endl;
//	//delete p8;
//
//	Stack st;//�Զ������͵��ù��������
//	//cout << endl;
//	
//	Stack* pst = new Stack;//ָ������������
//	delete pst;
//	//free(pst); // �ٵ������������� -- ���ڴ�й©
//
//	// ���ۣ�new/mallocϵ�� �еײ�ʵ�ֻ����й������档��ƥ��ʹ��
//	// ���������⣬����û���⣬������һ��ƥ��ʹ��
//
//	//A* p9 = new A[10];
//	////free(p9);
//	////delete p9;
//	//delete[] p9;
//
//	return 0;
//}

