#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
JZ42 连续子数组的最大和
https://www.nowcoder.com/practice/459bd355da1549fa8a49e350bf3df484?tpId=13&tqId=11183&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tPage=2
*/
class Solution {
public:
    int FindGreatestSumOfSubArray(std::vector<int>& array) {
        int n = array.size();
        int maxSum = array[0]; // 保存最大子数组和的变量
        int currentSum = array[0]; // 保存当前子数组和的变量

        for (int i = 1; i < n; i++) {
            // 对于当前元素，判断是将其加入之前的子数组，还是重新开始一个新的子数组
            currentSum = std::max(array[i], currentSum + array[i]);
            // 更新最大子数组和的值
            maxSum = std::max(maxSum, currentSum);
        }

        return maxSum;
    }
};
