#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

//136. ֻ����һ�ε�����
//https://leetcode.cn/problems/single-number/description/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int v = 0;
        for (auto a : nums)
        {
            v ^= a;
        }
        return v;
    }
};

//118. �������
//https://leetcode.cn/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.resize(numRows, vector<int>());
        for (size_t i = 0; i < numRows; i++) {
            v[i].resize(i + 1, 0);
            v[i][0] = v[i][v[i].size() - 1] = 1;
        }
        for (size_t i = 0; i < v.size(); i++) {
            for (size_t j = 0; j < v[i].size(); j++) {
                if (v[i][j] == 0) {
                    v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
                }
            }
        }
        return v;
    }
};

//26. ɾ�����������е��ظ���
//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
//����һ
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int a = 0, b = 1;
        while (b < nums.size()) {
            if (nums[a] != nums[b])
                nums[++a] = nums[b];
            ++b;
        }
        return a + 1;
    }
};
//������
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 1)
            return 1;
        vector<int>::iterator it = nums.begin();
        vector<int>::iterator it1 = it + 1;

        while (it != nums.end()) {
            while (it1 != nums.end() && *it1 == *it) {
                it1++;
            }
            it = nums.erase(++it, it1);
            it1 = it;
            it1++;
        }
        return nums.size();
    }
};

//137. ֻ����һ�ε����� II
//https://leetcode.cn/problems/single-number-ii/description/
//��һ�� 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        for (auto a : nums) {
            ++count[a];
        }
        for (auto& pair : count) {
            if (pair.second == 1) {
                return pair.first;
            }
        }
        return -1;
    }
};
/*
�����ж��ֽ���˼·�����磺
  1. ͳ��ÿ�����ֳ��ֵĴ�����Ȼ���ҳ�ֻ����1�ε����֣�ȱ�㣺��Ҫ���������ռ�
  2. �����ݽ�������Ȼ���ҳ�ֻ����1�ε����֣�ȱ�㣺ʱ�临�ӶȲ���O(N)
����ĿҪ���ˣ�ʱ�临�Ӷȱ���ΪO(N)����ʱ�临�Ӷȣ���˱���������Ŀ���Ѷȡ�


��Ŀ˵��ֻ��һ�����ֳ���һ�Σ��������־�����3�Σ���������Ϊ{3,5,3,3}
ͨ��������֪��
3�Ķ����ƣ�0 0 0 0 0 0 1 1
5�Ķ����ƣ�0 0 0 0 0 1 0 1
3�Ķ����ƣ�0 0 0 0 0 0 1 1
3�Ķ����ƣ�0 0 0 0 0 0 1 1
          0 0 0 0 0 1 3 4  ������1������
���ڳ���3�ε����֣���λ���ֵĴ�������3�ı�������˶�ͳ�Ƶ�Ϊ1�ı�������%3
          0 0 0 0 0 1 0 1 = 5
          �������ֻ����һ�ε�����
*/


// ʱ�临�Ӷȣ�O(32*N)--->O(N)  �ռ临�Ӷȣ�O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; ++i) {


            // ͳ�Ƹ�ÿ�����ֵ�i������λΪ1������
            int total = 0;
            for (int num : nums) {
                total += ((num >> i) & 1);
            }


            // ���total�ܹ���3������˵��ֻ����һ�ε������ڸ�λ����һ����0
            // �����ڸ�λ����һ����1
            if (total % 3) {
                ans |= (1 << i);
            }
        }
        return ans;
    }
};


//260. ֻ����һ�ε����� III
//https://leetcode.cn/problems/single-number-iii/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum ^= num;
        }
        int l = (sum == INT_MIN ? sum : sum & (-sum));
        int num1 = 0, num2 = 0;
        for (int num : nums) {
            if (num & l)
                num1 ^= num;
            else
                num2 ^= num;
        }
        return { num1, num2 };
    }
};

/*�ⷨһ ����

*˼·��

* 1. ��ǰ������������������Σ���Ϊ��ͬԪ�أ�������2

* 2. ������һ�Σ�ǰ�󲻵ȣ�����Ϊ����Ҫ����������vector��������1

* 3. ��û��β��λ�ã�˵�����һ��Ԫ��Ϊ����һ�ε���

*/

class Solution

{

public:

    vector<int> singleNumber(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> res;
        int i = 0;
        for (; i < nums.size() - 1; )
        {
            if (nums[i] == nums[i + 1])
            {
                i += 2;
            }
            else
            {
                res.push_back(nums[i]);
                i += 1;
            }
        }
        if (i < nums.size())
        {
            res.push_back(nums[i]);
        }
        return res;
    }
};



/*�ⷨ�� ���ⷨ

*˼·��

* 1. ֻ������Ԫ�س���һ��,������Ԫ�ض���������.

* 2. ȫ��Ԫ����������������ε�����. ���Ľ��Ϊs.

* 3. Ѱ��s��lowbitֵ. lowbit(s)Ϊs�Ķ����Ʊ��ʽ�����ұߵ�1����Ӧ��ֵ. ���lowbit(s)�����Ʊ��ʽ��ֻ   ��һ��bit 1.   lowbit(s) = s & -s

* 4. ��lowbit(s)������ֳ�����. һ����,Ԫ��A[i] & lowbit(s) == lowbit(s),

   ������lowbit(s)��bit 1. ʣ�������һ��.����,������ͬ��Ҳһ�����ڲ�ͬ��. ��Ϊ���ֵs�е�bit1����   ��Ϊ�������ֵĲ�ͬ�����׵�.

* 5. ͬһ���Ԫ������������ͬ����. �������ε�����, �϶�����ͬһ��, ����������.

*/



class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        const int N = nums.size();
        int s = 0;

        for (auto x : nums)
        {
            s ^= x;
        }
        int lowbit = s & -s;
        int a = 0, b = 0;

        for (auto x : nums)
        {
            if ((x & lowbit) == lowbit)
                a ^= x;    
            else
                b ^= x;
        }
        return vector<int>{a, b};
    }
};


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
