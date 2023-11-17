#include "Stack.h"

void Stack::Init(int n)
{
	a = (int*)malloc(sizeof(int) * n);
	if (nullptr == a)
	{
		perror("malloc…Í«Îø’º‰ ß∞‹");
		return;
	}

	capacity = n;
	size = 0;
}

void Stack::Push(int x)
{
	//...
	a[size++] = x;
}