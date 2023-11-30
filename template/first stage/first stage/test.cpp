#include <iostream>
using namespace std;

//void Swap(double& left, double& right)
//{
//	double tmp = left;
//	left = right;
//	right = tmp;
//}
//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
// 
//泛型编程——模板
//template<class T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	//Swap(a, b);
//	swap(a, b);//库里面包含swap，可以直接用
//
//	double c = 1.1, d = 2.22;
//	//Swap(a, b);
//	swap(a, b);
//
//	return 0;
//}
template<class t>
t add(const t& left, const t& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.11, d2 = 20.22;
	// 方法一：实参传递给形参，自动推演模板类型
	cout << add(a1, a2) << endl;
	cout << add(d1, d2) << endl;
	cout << add(a1, (int)d1) << endl;
	cout << add((double)a1, d1) << endl;

	// 方法二：显示实例化，在函数名和参数列表中间加上模板参数
	cout << add<int>(a1, d1) << endl;//隐式类型转换
	cout << add<double>(a1, d1) << endl;

	return 0;
}
