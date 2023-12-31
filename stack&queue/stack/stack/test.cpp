#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include "Stack.h"
#include "Queue.h"
#include <queue>
//int main()
//{
//	hbr::test_stack();
//	hbr::test_queue();
//	return 0;
//}

//int main() {
//    stack<int> myStack; // ����һ���洢int���͵�ջ����
//
//    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl; // ���ջ�Ƿ�Ϊ��
//
//    myStack.push(10); // ѹ��Ԫ��10
//    myStack.push(20); // ѹ��Ԫ��20
//    myStack.push(30); // ѹ��Ԫ��30
//
//    cout << "Stack size: " << myStack.size() << endl; // ���ջ��Ԫ�صĸ���
//
//    cout << "Top element: " << myStack.top() << endl; // ���ջ��Ԫ�ص�ֵ
//
//    myStack.pop(); // ����ջ��Ԫ��
//
//    cout << "Top element after pop: " << myStack.top() << endl; // ����������ջ��Ԫ�ص�ֵ
//
//    return 0;
//}

int main()
{

    queue<char> Q;

    char x, y;

    x = 'n'; y = 'g';

    Q.push(x); Q.push('i'); Q.push(y);

    Q.pop(); Q.push('r'); Q.push('t'); Q.push(x);

    Q.pop(); Q.push('s');

    while (!Q.empty())

    {

        x = Q.front();

        Q.pop();

        cout << x;

    };

    cout << y;

}