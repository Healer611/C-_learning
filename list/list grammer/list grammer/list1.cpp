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
// list的构造
void TestList1()
{
    list<int> l1;                         // 构造空的l1
    list<int> l2(4, 100);                 // l2中放4个值为100的元素
    list<int> l3(l2.begin(), l2.end());  // 用l2的[begin(), end()）左闭右开的区间构造l3
    list<int> l4(l3);                    // 用l3拷贝构造l4

    // 以数组为迭代器区间构造l5
    int array[] = { 16,2,77,29 };
    list<int> l5(array, array + sizeof(array) / sizeof(int));

    // 列表格式初始化C++11
    list<int> l6{ 1,2,3,4,5 };

    // 用迭代器方式打印l5中的元素
    list<int>::iterator it = l5.begin();
    while (it != l5.end())
    {
        cout << *it << " ";
        ++it;
    }
    cout << endl;

    // C++11范围for的方式遍历
    for (auto& e : l5)
        cout << e << " ";

    cout << endl;
}

// 打印列表
void PrintList(const list<int>& l)
{
    for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;
}

// 测试list的插入和删除操作
// 包括push_back/pop_back/push_front/pop_front
void TestList3()
{
    int array[] = { 1, 2, 3 };
    list<int> L(array, array + sizeof(array) / sizeof(array[0]));

    // 在list的尾部插入4，头部插入0
    L.push_back(4);
    L.push_front(0);
    PrintList(L);

    // 删除list尾部节点和头部节点
    L.pop_back();
    L.pop_front();
    PrintList(L);
}

// 测试list的insert和erase操作
void TestList4()
{
    int array1[] = { 1, 2, 3 };
    list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));

    // 获取链表中第二个节点
    auto pos = ++L.begin();
    cout << *pos << endl;

    // 在pos前插入值为4的元素
    L.insert(pos, 4);
    PrintList(L);

    // 在pos前插入5个值为5的元素
    L.insert(pos, 5, 5);
    PrintList(L);

    // 在pos前插入[v.begin(), v.end)区间中的元素
    vector<int> v{ 7, 8, 9 };
    L.insert(pos, v.begin(), v.end());
    PrintList(L);

    // 删除pos位置上的元素
    L.erase(pos);
    PrintList(L);

    // 删除list中[begin, end)区间中的元素，即删除list中的所有元素
    L.erase(L.begin(), L.end());
    PrintList(L);
}

// 测试list的resize/swap/clear操作
void TestList5()
{
    // 用数组来构造list
    int array1[] = { 1, 2, 3 };
    list<int> l1(array1, array1 + sizeof(array1) / sizeof(array1[0]));
    PrintList(l1);

    // 交换l1和l2中的元素
    list<int> l2;
    l1.swap(l2);
    cout << "l1：";
    PrintList(l1);
    cout << "l2：";
    PrintList(l2);

    // 将l2中的元素清空
    l2.clear();
    cout << l2.size() << endl;
}


int main()
{
    cout << "执行TestList3()" << endl;
    TestList3();
    cout << endl;

    cout << "执行TestList4()" << endl;
    TestList4();
    cout << endl;

    cout << "执行TestList5()" << endl;
    TestList5();
    return 0;
}