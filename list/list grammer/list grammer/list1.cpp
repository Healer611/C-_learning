#include<iostream>
using namespace std;
#include<list>

void test1()
{
	list<int> It;
	It.push_back(1);
	It.push_back(2);
	It.push_back(3);

	list<int>::iterator it = It.begin();
	while (it != It.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

int main()
{
	test1();
	return 0;
}