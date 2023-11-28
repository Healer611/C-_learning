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


//
//class Sum
//{
//public:
//	Sum()
//	{
//		_sum += _i;
//		++_i;
//	}
//
//	static int GetSum()
//	{
//		return _sum;
//	}
//private:
//	static int _i;
//	static int _sum;
//};
//
//int Sum::_i = 1;
//int Sum::_sum = 0;
//
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//Sum a[n];
//		Sum* ptr = new Sum[n];
//
//		return Sum::GetSum();
//	}
//
//	~Solution()
//	{
//		cout << "~Solution()" << endl;
//	}
//};

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

//int main()
//{
//	/*Solution s;
//	cout << s.Sum_Solution(10) << endl;*/
//	//下面更优
//	cout << Solution().Sum_Solution(10) << endl;
//
//	//Solution s1();
//
//	// 匿名对象，生命周期只在这一行
//	Solution();
//	Sum();
//
//	return 0;
//}
//class A{
//private:
//	int h = 0;
//	static int k;
//public:
//	class B // B天生就是A的友元
//	{
//	public:
//		void Print(const A& a)
//		{
//			cout << k << endl;// >> OK
//			cout << a.h << endl;// >> OK
//		}
//	};
//};
//int A::k = 1;
//
//int main()
//{
//	A aa;
//	//cout << sizeof(aa) << endl;
//
//	A::B bb;
//	bb.Print(aa);
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//...
//		return n;
//	}
//};
//int main()
//{
//	A aa1;
//	// 不能这么定义对象，因为编译器无法识别下面是一个函数声明，还是对象定义
//	//A aa1();
//	// 但是我们可以这么定义匿名对象，匿名对象的特点不用取名字，
//	// 但是他的生命周期只有这一行，我们可以看到下一行他就会自动调用析构函数
//	A();
//	A aa2(2);
//	// 匿名对象在这样场景下就很好用，当然还有一些其他使用场景，这个我们以后遇到了再说
//	Solution().Sum_Solution(10);
//	return 0;
//}


class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a)" << endl;
	}

	A(const A& aa)
		:_a(aa._a)
	{
		cout << "A(const A& aa)" << endl;
	}

	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;

		if (this != &aa)
		{
			_a = aa._a;
		}

		return *this;
	}

	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};

void func1(A aa)
{

}

void func2(const A& aa)
{

}



//int main()
//{
//	A aa1 = 1; // 构造+拷贝构造 -》 优化为直接构造
//	func1(aa1); // 无优化
//	func1(2); // 构造+拷贝构造 -》 优化为直接构造
//	func1(A(3)); // 构造+拷贝构造 -》 优化为直接构造
//
//	cout << "----------------------------------" << endl;
//
//	func2(aa1);  // 无优化
//	func2(2);    // 无优化
//	func2(A(3)); // 无优化
//
//
//	return 0;
//}
A func3()
{
	A aa;
	return aa;
}
A func4()
{
	return A();
}

int main()
{
	func3();// 构造+拷贝构造
	A aa1 = func3();//构造+两个拷贝构造>>>优化为构造+一个拷贝构造

	func4(); // 构造+拷贝构造 -- 优化为构造
	A aa3 = func4(); // 构造+拷贝构造+拷贝构造  -- 优化为构造

	

	//A aa1 = func3(); // 拷贝构造+拷贝构造  -- 优化为一个拷贝构造

	//cout << "****" << endl;
	//A aa2;
	//aa2 = func3();  // 不能优化

	return 0;
}