#include <iostream>
using namespace std;


// ʵ��һ���࣬��������д������˶��ٸ������
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
//	//��̬��Ա���� û��thisָ��
//	static int Getcount()
//	{
//		// _a++; // ����ֱ�ӷ��ʷǾ�̬��Ա
//		return count;
//	}
//	//int Getcount()
//	//{
//	//	return count;
//	//}
//private:
//	// ������ĳ�������������ж�������������
//	static int count; // �˴�Ϊ����
//	
//	int _a = 0;
//};
//	
//int A::count = 0; // �����ʼ��
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
	//�������
	cout << Solution().Sum_Solution(10) << endl;

	//Solution s1();

	// ����������������ֻ����һ��
	Solution();
	Sum();

	return 0;
}