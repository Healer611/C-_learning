#include <iostream>
using namespace std;
#include <stack>
#include <vector>
//155. 最小栈
//https://leetcode.cn/problems/min-stack/description/
class MinStack {
public:
    MinStack() {}

    void push(int val) {
        _st.push(val);
        if (_minst.empty() || val <= _minst.top())
        {
            _minst.push(val);
        }
    }

    void pop() {
        if (_minst.top() == _st.top()) {
            _minst.pop();
        }
        _st.pop();
    }

    int top() {
        return _st.top();
    }

    int getMin() {
        return _minst.top();
    }

private:
    stack<int> _st;
    stack<int> _minst;
};

//JZ31 栈的压入、弹出序列
//https://www.nowcoder.com/practice/d77d11405cc7470d82554cb392585106?tpId=13&&tqId=11174&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
class Solution {
public:
    bool IsPopOrder(vector<int>& pushV, vector<int>& popV) {
        stack<int> st;
        int pushi = 0, popi = 0;
        while (pushi < pushV.size()) {
            st.push(pushV[pushi++]);
            while (!st.empty() && st.top() == popV[popi]) {
                st.pop();
                popi++;
            }
        }
        return popi == popV.size();
    }
};