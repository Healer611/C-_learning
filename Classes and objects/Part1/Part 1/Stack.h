#pragma once
#include <stdlib.h>

// 类成员函数声明和定义分离
//struct Stack无需访问限定符
class Stack//必须有访问限定符，否则报错
{
public:
	// 成员函数
	void Init(int capacity = 4);
	void Push(int x);

private:
	// 成员变量
	int* a;
	int size;
	int capacity;
};