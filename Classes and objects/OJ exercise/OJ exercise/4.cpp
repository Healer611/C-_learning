/*
JZ64 Çó1+2+3+...+n
https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1?tpId=13&tqId=11200&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
*/
#include <iostream>
using namespace std;
class Solution {
private:
    static int _sum;
    static int _i;
public:
    class Sum {
    public:
        Sum() {
            _sum += _i;
            _i++;
        }
    };
    int Sum_Solution(int n) {
        Sum a[n];
        return _sum;
    }
};
int Solution::_sum = 0, _i = 1;