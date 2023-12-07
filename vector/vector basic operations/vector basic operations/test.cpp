#include <iostream>
#include <vector>
using namespace std;
void test1()
{
	//无参构造
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	//三种输出方式 范围for [] 迭代器
	for (auto a : v)
	{
		cout << a << " ";
	}
	cout << endl;

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//vector<int>::iterator it = v.begin();
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	
	//拷贝构造
	vector<int> copy(v);
	for (auto a : copy) 
	{
		cout << a << " ";
	}
	cout << endl;
}
void test2()
{
	//构造并初始化
	vector<int> v1(6, 6);
	for (auto a : v1)
	{
		cout << a << " ";
	}
	cout << endl;

	//迭代器
	vector<int> v2(v1.begin(), v1.end());
	for (auto b : v2)
	{
		cout << b << " ";
	}
	cout << endl;

	string s1("hello");
	vector<char> v3(s1.begin(), s1.end());
	for (auto b : v3)
	{
		cout << b << " ";
	}

}
void test3()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
}

void test4()
{
	vector<int> v;
	v.resize(10, 0);//不需要delete出作用于自动释放

	vector<int> v2(10, 0);

	
}

void TestVectorExpand()
{
	size_t sz;
	vector<int> v;
	sz = v.capacity();
	cout << "making v grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}
// 如果已经确定vector中要存储元素大概个数，可以提前将空间设置足够
// 就可以避免边插入边扩容导致效率低下的问题了
void TestVectorExpandOP()
{
	vector<int> v;
	size_t sz = v.capacity();
	v.reserve(100); // 提前将容量设置好，可以避免一遍插入一遍扩容
	cout << "making bar grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		v.push_back(i);
		if (sz != v.capacity())
		{
			sz = v.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

//int main() {
//	std::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	for (int i : v) {
//		std::cout << i << " ";
//	}
//	cout << endl;
//	v.pop_back();
//	for (int i : v) {
//		std::cout << i << " ";
//	}
//	return 0;
//}

void test5()
{
	vector<int> v;
	v.push_back(1); // 在vector末尾插入元素1
	v.push_back(2); // 在vector末尾插入元素2
	v.push_back(3); // 在vector末尾插入元素3
	v.push_back(4); // 在vector末尾插入元素4

	for (auto e : v)
	{
		cout << e << " "; // 输出vector中的每个元素
	}
	cout << endl;

	vector<int>::iterator pos = find(v.begin(), v.end(), 2); // 在vector中查找值为2的元素
	if (pos != v.end())
	{
		v.insert(pos, 20); // 在找到的位置之前插入元素20
	}

	for (auto e : v)
	{
		cout << e << " "; // 输出修改后的vector中的每个元素
	}
	cout << endl;

	pos = find(v.begin(), v.end(), 2); // 再次查找值为2的元素
	if (pos != v.end())
	{
		v.erase(pos); // 删除找到的元素
	}

	for (auto e : v)
	{
		cout << e << " "; // 输出修改后的vector中的每个元素
	}
	cout << endl;

	v.erase(v.begin()); // 删除vector的第一个元素

	for (auto e : v)
	{
		cout << e << " "; // 输出修改后的vector中的每个元素
	}
	cout << endl;
}

//int main()
//{
//	test5();
//	return 0;
//}

//int main()
//{
//	//test1();
//	//cout << endl;
//	//test2();
//	//test3();
//	TestVectorExpandOP();
//	return 0;
//}

//int main() {
//	std::vector<int> v1 = { 1, 2, 3 };
//	std::vector<int> v2 = { 4, 5, 6 };
//	v1.swap(v2);
//	for (int i : v1) {
//		cout << i << " ";
//	}
//	cout << endl;
//	for (int i : v2) {
//		cout << i << " ";
//	}
//	return 0;
//}


int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	for (size_t i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}