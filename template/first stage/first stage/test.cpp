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
 
//���ͱ�̡���ģ��
//template<class T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//template<class A,class B>
//void Fun{}
//int main()
//{
//	int a = 1, b = 2;
//	//Swap(a, b);
//	swap(a, b);//���������swap������ֱ����
//
//	double c = 1.1, d = 2.22;
//	//Swap(a, b);
//	swap(a, b);
//
//	return 0;
//}
// 
// 
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}

//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.11, d2 = 20.22;
//	//Add(a1, a2);
//	//Add(d1, d2);
//	//Add(a1, d1);
//	// ����һ��ʵ�δ��ݸ��βΣ��Զ�����ģ������
//	//cout << Add(a1, a2) << endl;
//	//cout << Add(d1, d2) << endl;
//	//cout << Add(a1, (int)d1) << endl;
//	//cout << Add((double)a1, d1) << endl;
//
//	//// ����������ʾʵ�������ں������Ͳ����б��м����ģ�����
//	cout << Add<int>(a1, d1) << endl;//��ʽ����ת��
//	cout << Add<double>(a1, d1) << endl;
//
//	return 0;
//}


//int Add(int left, int right)
//{
//	return left + right;
//}
//
//template<class S>
//S Add(S left,S right)
//{
//	return left + right;
//}
//
//int main()
//{
//	Add(1, 2); 
//	Add<int>(1, 2);
//	return 0;
//}


template<class T>
class Stack
{
public:
	Stack(int capaicty = 4)
	{
		_a = new T[capaicty];
		_top = 0;
		_capacity = capaicty;
	}

	~Stack()
	{
		delete[] _a;
		_capacity = _top = 0;
	}

private:
	T* _a;
	size_t _top;
	size_t _capacity;
};

int main()
{
	Stack<int> st1; // int
	Stack<double> st2; // double

	vector<int> v;
	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}