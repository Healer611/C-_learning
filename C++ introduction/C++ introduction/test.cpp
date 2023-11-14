//#include <stdio.h>
//
//int main()
//{
//	printf("hello world\n");
//	
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	//scanf_s("%d", &a);
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}

//命名冲突1
//#include <stdio.h>
//#include <stdlib.h>
//int rand = 1;
//
//int main()
//{
//	printf("%d\n", rand);
//	
//	return 0;
//}

//#include<stdio.h>
//#include <stdlib.h>
// 域
// 局部域/全局域：1、使用  2、生命周期
//int a = 2;
//
//void f1()
//{
//	int a = 0;
//	//printf("%d\n", a);
//	printf("%d\n",::a);  // ::域作用限定符
//}
//
//void f2()
//{
//	int a = 1;
//}
//
//int main()
//{
//	//printf("%d\n", a);
//	f1();
//
//	return 0;
//}

//#include <stdio.h>
//#include "list.h"
//#include "queue.h"
//
//int main()
//{
//
//	return 0;
//}

//#include <stdio.h>
//#include "list.h"
//#include "queue.h"
//int main()
//{
//	struct Q::Node node1;
//	struct L::Node node2;
//	
//	Q::x++;
//	L::x++;
//	return 0;
//}
//#include <stdio.h>
//#include "list.h"
//#include "queue.h"
//int main()
//{
//	struct Code::Q::Node node1;
//	struct Code::L::Node node2;
//	
//	Code::Q::x++;
//	Code::L::x++;
//	return 0;
//}

//#include "list.h"
//using namespace Code;
//int main()
//{
//	struct G i;
//	return 0;
//}

#include <iostream>
using namespace std;
//int main()
//{
//	cout << "1111" << endl;
//
//	int i = 0;
//	std::cin >> i;
//
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "1111" << endl;
//	return 0;
//}
// 
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a;
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}
// 
#include <iostream>
using namespace std;
//int main()
//{
////  << 流插入
////  endl '\n'
//	//cout << "hello" << endl;
//
//	//自动识别类型
//	int n = 0;
//	cin >> n;
//	double* a = (double*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << endl;
//	}
//
//
//	return 0;
//}
//格式化推荐printf
//#include <stdio.h>
//int main()
//{
//	char name[100] = "Kelly";
//	int age = 20;
//
//	cout << "name：" << name << endl;
//	cout << "age：" << age << endl;
//
//	printf("name：%s\nage：%d\n", name, age);
//	return 0;
//}

//void func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	//func();
//	func(666);
//	return 0;
//}

//void Func(int a = 1, int b = 2, int c = 3)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//int main()
//{
//	Func(4, 5, 6);
//	Func(4, 5);
//	Func(4);
//	Func();
//	return 0;
//}

//void Func(int a , int b = 2, int c = 3)
//{
//	cout << a << " " << b << " " << c << endl;
//}
//int main()
//{
//	Func(4, 5, 6);
//	Func(4, 5);
//	Func(4);
//	//Func(); 至少传一个值给a
//	return 0;
//}

//struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//};
//
//void StackInit(struct Stack* ps, int Capacity = 4)
//{
//	ps->a = (int*)malloc(sizeof(int) * Capacity);
//	if (ps->a == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	ps->top = 0;
//	ps->capacity = Capacity;
//}
//int main()
//{
//	Stack st1; // 最多要存100个数
//	StackInit(&st1, 100);
//
//	Stack st2; // 不知道多少数据
//	StackInit(&st2);
//
//	return 0;
//}


void Func(int a = 10)
{
	cout << a << endl;
}