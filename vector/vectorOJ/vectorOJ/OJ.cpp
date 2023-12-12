#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
JZ42 ���������������
https://www.nowcoder.com/practice/459bd355da1549fa8a49e350bf3df484?tpId=13&tqId=11183&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tPage=2
*/
class Solution {
public:
    int FindGreatestSumOfSubArray(std::vector<int>& array) {
        int n = array.size();
        int maxSum = array[0]; // �������������͵ı���
        int currentSum = array[0]; // ���浱ǰ������͵ı���

        for (int i = 1; i < n; i++) {
            // ���ڵ�ǰԪ�أ��ж��ǽ������֮ǰ�������飬�������¿�ʼһ���µ�������
            currentSum = std::max(array[i], currentSum + array[i]);
            // �������������͵�ֵ
            maxSum = std::max(maxSum, currentSum);
        }

        return maxSum;
    }
};
