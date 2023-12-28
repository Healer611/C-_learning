#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include "Stack.h"
#include "Queue.h"
//int main()
//{
//	hbr::test_stack();
//	hbr::test_queue();
//	return 0;
//}

int main() {
    stack<int> myStack; // 创建一个存储int类型的栈对象

    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl; // 检测栈是否为空

    myStack.push(10); // 压入元素10
    myStack.push(20); // 压入元素20
    myStack.push(30); // 压入元素30

    cout << "Stack size: " << myStack.size() << endl; // 输出栈中元素的个数

    cout << "Top element: " << myStack.top() << endl; // 输出栈顶元素的值

    myStack.pop(); // 弹出栈顶元素

    cout << "Top element after pop: " << myStack.top() << endl; // 输出弹出后的栈顶元素的值

    return 0;
}