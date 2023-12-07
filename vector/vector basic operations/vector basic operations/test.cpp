#include <iostream>
#include <vector>
using namespace std;
void test1()
{
	//�޲ι���
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	//���������ʽ ��Χfor [] ������
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
	
	//��������
	vector<int> copy(v);
	for (auto a : copy) 
	{
		cout << a << " ";
	}
	cout << endl;
}
void test2()
{
	//���첢��ʼ��
	vector<int> v1(6, 6);
	for (auto a : v1)
	{
		cout << a << " ";
	}
	cout << endl;

	//������
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
	v.resize(10, 0);//����Ҫdelete���������Զ��ͷ�

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
// ����Ѿ�ȷ��vector��Ҫ�洢Ԫ�ش�Ÿ�����������ǰ���ռ������㹻
// �Ϳ��Ա���߲�������ݵ���Ч�ʵ��µ�������
void TestVectorExpandOP()
{
	vector<int> v;
	size_t sz = v.capacity();
	v.reserve(100); // ��ǰ���������úã����Ա���һ�����һ������
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
	v.push_back(1); // ��vectorĩβ����Ԫ��1
	v.push_back(2); // ��vectorĩβ����Ԫ��2
	v.push_back(3); // ��vectorĩβ����Ԫ��3
	v.push_back(4); // ��vectorĩβ����Ԫ��4

	for (auto e : v)
	{
		cout << e << " "; // ���vector�е�ÿ��Ԫ��
	}
	cout << endl;

	vector<int>::iterator pos = find(v.begin(), v.end(), 2); // ��vector�в���ֵΪ2��Ԫ��
	if (pos != v.end())
	{
		v.insert(pos, 20); // ���ҵ���λ��֮ǰ����Ԫ��20
	}

	for (auto e : v)
	{
		cout << e << " "; // ����޸ĺ��vector�е�ÿ��Ԫ��
	}
	cout << endl;

	pos = find(v.begin(), v.end(), 2); // �ٴβ���ֵΪ2��Ԫ��
	if (pos != v.end())
	{
		v.erase(pos); // ɾ���ҵ���Ԫ��
	}

	for (auto e : v)
	{
		cout << e << " "; // ����޸ĺ��vector�е�ÿ��Ԫ��
	}
	cout << endl;

	v.erase(v.begin()); // ɾ��vector�ĵ�һ��Ԫ��

	for (auto e : v)
	{
		cout << e << " "; // ����޸ĺ��vector�е�ÿ��Ԫ��
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