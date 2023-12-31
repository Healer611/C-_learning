#include <iostream>
using namespace std;
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
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

//150. 逆波兰表达式求值
//https://leetcode.cn/problems/evaluate-reverse-polish-notation/submissions/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto& str : tokens) {
            if (str == "+" || str == "-" || str == "*" || str == "/") {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                switch (str[0]) {
                case '+':
                    st.push(left + right);
                    break;
                case '-':
                    st.push(left - right);
                    break;
                case '*':
                    st.push(left * right);
                    break;
                case '/':
                    st.push(left / right);
                    break;
                }
            }
            else {
                st.push(stoi(str));
            }
        }
        return st.top();
    }
};


//232. 用栈实现队列
//https://leetcode.cn/problems/implement-queue-using-stacks/
class MyQueue {
public:
    MyQueue() {}

    void push_to_pop() {
        if (stpop.empty()) {
            while (!stpush.empty()) {
                stpop.push(stpush.top());
                stpush.pop();
            }
        }
    }

    void push(int x) { stpush.push(x); }

    int pop() {
        push_to_pop();
        int x = stpop.top();
        stpop.pop();
        return x;
    }

    int peek() {
        push_to_pop();
        return stpop.top();
    }

    bool empty() { return stpush.empty() && stpop.empty(); }

private:
    stack<int> stpush;
    stack<int> stpop;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */


//225. 用队列实现栈
//https://leetcode.cn/problems/implement-stack-using-queues/


//215. 数组中的第K个最大元素
//https://leetcode.cn/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        while (--k) {
            pq.pop();
        }
        return pq.top();
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.begin() + k);
        for (size_t i = k; i < nums.size(); i++) {
            if (nums[i] > pq.top()) {
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};
