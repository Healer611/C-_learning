#include <iostream>
using namespace std;


// 实现一个类，计算程序中创建出了多少个类对象。
//int count = 0;
//
//class A
//{
//public:
//	A(int a = 0)
//	{
//		++count;
//	}
//
//	A(const A& aa)
//	{
//		++count;
//	}
//};
//
//void func(A a)
//{}
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//	func(aa1);
//	A aa3 = 1;
//
//	count++;
//	count++;
//	count++;
//
//	cout << count << endl;
//
//	return 0;
//}


//using std::cout;
//using std::endl;
//
//int count = 0;
//
//class A
//{
//public:
//	A(int a = 0)
//	{
//		++count;
//	}
//
//	A(const A& aa)
//	{
//		++count;
//	}
//};
//
//void func(A a)
//{}
//
//int main()
//{
//	A aa1;
//	A aa2(aa1);
//	func(aa1);
//	A aa3 = 1;
//
//	cout << count << endl;
//
//	return 0;
//}



//class A
//{
//public:
//	A(int a = 0)
//	{
//		++count;
//	}
//
//	A(const A& aa)
//	{
//		++count;
//	}
//	//静态成员函数 没有this指针
//	static int Getcount()
//	{
//		// _a++; // 不能直接访问非静态成员
//		return count;
//	}
//	//int Getcount()
//	//{
//	//	return count;
//	//}
//private:
//	// 不属于某个对象，所于所有对象，属于整个类
//	static int count; // 此处为声明
//	
//	int _a = 0;
//};
//	
//int A::count = 0; // 定义初始化
//
//void func(A a)
//{}
//
//int main()
//{
//	//A aa1;
//	//A aa2(aa1);
//	//func(aa1);
//	//A aa3 = 1;
//	A aa4[10];
//	//cout << A().count << endl;
//
//	cout << A::Getcount() << endl;
//	
//	// 
//	//cout << A().Getcount() << endl;
//	return 0;
//}



class Sum
{
public:
	Sum()
	{
		_sum += _i;
		++_i;
	}

	static int GetSum()
	{
		return _sum;
	}
private:
	static int _i;
	static int _sum;
};

int Sum::_i = 1;
int Sum::_sum = 0;

class Solution {
public:
	int Sum_Solution(int n) {
		//Sum a[n];
		Sum* ptr = new Sum[n];

		return Sum::GetSum();
	}

	~Solution()
	{
		cout << "~Solution()" << endl;
	}
};

//A func()
//{
//	int n;
//	cin >> n;
//	int ret = Solution().Sum_Solution(n);
//
//	//A retA(ret);
//	//return retA;
//	return A(ret);
//}

int main()
{
	/*Solution s;
	cout << s.Sum_Solution(10) << endl;*/
	//下面更优
	cout << Solution().Sum_Solution(10) << endl;

	//Solution s1();

	// 匿名对象，生命周期只在这一行
	Solution();
	Sum();

	return 0;
}