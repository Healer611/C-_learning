#include<iostream>
using namespace std;
#include<list>
#include <vector>

//void test1()
//{
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//
//	list<int>::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	list<int>::iterator pos = find(lt.begin(), lt.end(), 3);
//	if (pos != lt.end())
//	{
//		lt.insert(pos, 30);
//	}
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}


////////////////////////////////////////////////////////////
// list�Ĺ���
void TestList1()
{
    list<int> l1;                         // ����յ�l1
    list<int> l2(4, 100);                 // l2�з�4��ֵΪ100��Ԫ��
    list<int> l3(l2.begin(), l2.end());  // ��l2��[begin(), end()������ҿ������乹��l3
    list<int> l4(l3);                    // ��l3��������l4

    // ������Ϊ���������乹��l5
    int array[] = { 16,2,77,29 };
    list<int> l5(array, array + sizeof(array) / sizeof(int));

    // �б��ʽ��ʼ��C++11
    list<int> l6{ 1,2,3,4,5 };

    // �õ�������ʽ��ӡl5�е�Ԫ��
    list<int>::iterator it = l5.begin();
    while (it != l5.end())
    {
        cout << *it << " ";
        ++it;
    }
    cout << endl;

    // C++11��Χfor�ķ�ʽ����
    for (auto& e : l5)
        cout << e << " ";

    cout << endl;
}

// ��ӡ�б�
void PrintList(const list<int>& l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}

// ����list�Ĳ����ɾ������
// ����push_back/pop_back/push_front/pop_front
void TestList3()
{
    int array[] = { 1, 2, 3 };
    list<int> L(array, array + sizeof(array) / sizeof(array[0]));

    // ��list��β������4��ͷ������0
    L.push_back(4);
    L.push_front(0);
    PrintList(L);

    // ɾ��listβ���ڵ��ͷ���ڵ�
    L.pop_back();
    L.pop_front();
    PrintList(L);
}

// ����list��insert��erase����
void TestList4()
{
    int array1[] = { 1, 2, 3 };
    list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));

    // ��ȡ�����еڶ����ڵ�
    auto pos = ++L.begin();
    cout << *pos << endl;

    // ��posǰ����ֵΪ4��Ԫ��
    L.insert(pos, 4);
    PrintList(L);

    // ��posǰ����5��ֵΪ5��Ԫ��
    L.insert(pos, 5, 5);
    PrintList(L);

    // ��posǰ����[v.begin(), v.end)�����е�Ԫ��
    vector<int> v{ 7, 8, 9 };
    L.insert(pos, v.begin(), v.end());
    PrintList(L);

    // ɾ��posλ���ϵ�Ԫ��
    L.erase(pos);
    PrintList(L);

    // ɾ��list��[begin, end)�����е�Ԫ�أ���ɾ��list�е�����Ԫ��
    L.erase(L.begin(), L.end());
    PrintList(L);
}

// ����list��resize/swap/clear����
void TestList5()
{
    // ������������list
    int array1[] = { 1, 2, 3 };
    list<int> l1(array1, array1 + sizeof(array1) / sizeof(array1[0]));
    PrintList(l1);

    // ����l1��l2�е�Ԫ��
    list<int> l2;
    l1.swap(l2);
    cout << "l1��";
    PrintList(l1);
    cout << "l2��";
    PrintList(l2);

    // ��l2�е�Ԫ�����
    l2.clear();
    cout << l2.size() << endl;
}


int main()
{
    cout << "ִ��TestList3()" << endl;
    TestList3();
    cout << endl;

    cout << "ִ��TestList4()" << endl;
    TestList4();
    cout << endl;

    cout << "ִ��TestList5()" << endl;
    TestList5();
    return 0;
}