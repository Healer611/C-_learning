#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

//136. 只出现一次的数字
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

//118. 杨辉三角
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

//26. 删除有序数组中的重复项
//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
//方法一
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
//方法二
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

//137. 只出现一次的数字 II
//https://leetcode.cn/problems/single-number-ii/description/
//第一种 
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
该题有多种解题思路，比如：
  1. 统计每个数字出现的次数，然后找出只出现1次的数字，缺点：需要借助辅助空间
  2. 对数据进行排序，然后找出只出现1次的数字，缺点：时间复杂度不是O(N)
而题目要求了，时间复杂度必须为O(N)线性时间复杂度，因此便增加了题目的难度。


题目说：只有一个数字出现一次，其余数字均出现3次，假设数组为{3,5,3,3}
通过分析可知：
3的二进制：0 0 0 0 0 0 1 1
5的二进制：0 0 0 0 0 1 0 1
3的二进制：0 0 0 0 0 0 1 1
3的二进制：0 0 0 0 0 0 1 1
          0 0 0 0 0 1 3 4  二进制1的总数
对于出现3次的数字，各位出现的次数都是3的倍数，因此对统计的为1的比特总数%3
          0 0 0 0 0 1 0 1 = 5
          结果就是只出现一次的数字
*/


// 时间复杂度：O(32*N)--->O(N)  空间复杂度：O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; ++i) {


            // 统计该每个数字第i个比特位为1的总数
            int total = 0;
            for (int num : nums) {
                total += ((num >> i) & 1);
            }


            // 如果total能够被3整除，说明只出现一次的数字在该位置上一定是0
            // 否则在该位置上一定是1
            if (total % 3) {
                ans |= (1 << i);
            }
        }
        return ans;
    }
};


//260. 只出现一次的数字 III
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

/*解法一 排序法

*思路：

* 1. 从前往后遍历，若出现两次，则为相同元素，索引加2

* 2. 若出现一次（前后不等），则为所需要的数，存入vector，索引加1

* 3. 若没到尾后位置，说明最后一个元素为出现一次的数

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



/*解法二 异或解法

*思路：

* 1. 只有两个元素出现一次,其它的元素都出现两次.

* 2. 全部元素异或消掉出现两次的数字. 异或的结果为s.

* 3. 寻找s的lowbit值. lowbit(s)为s的二进制表达式中最右边的1所对应的值. 因此lowbit(s)二进制表达式中只   有一个bit 1.   lowbit(s) = s & -s

* 4. 用lowbit(s)将数组分成两组. 一组中,元素A[i] & lowbit(s) == lowbit(s),

   即包含lowbit(s)的bit 1. 剩余的是另一组.而且,两个不同数也一定分在不同组. 因为异或值s中的bit1就是   因为两个数字的不同而贡献的.

* 5. 同一组的元素再异或求出不同数字. 出现两次的数字, 肯定出现同一组, 异或后消除掉.

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
