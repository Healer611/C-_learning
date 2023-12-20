#include<iostream>
using namespace std;
#include<vector>

//直接插入排序
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int end = i;
            int tmp = nums[i + 1];
            while (end >= 0)
            {
                if (nums[end] > tmp)
                {
                    nums[end + 1] = nums[end];
                    --end;
                }
                else
                    break;
            }
            nums[end + 1] = tmp;
        }
        return nums;
    }
};

//希尔排序
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int gap = nums.size();
        while (gap > 1) {
            gap = gap / 3 + 1;
            for (int i = 0; i < nums.size() - gap; i++) {
                int end = i;
                int tmp = nums[end + gap];
                while (end >= 0) {
                    if (nums[end] > tmp) {
                        nums[end + gap] = nums[end];
                        end -= gap;
                    }
                    else
                        break;
                }
                nums[end + gap] = tmp;
            }
        }
        return nums;
    }
};

//直接选择排序
//常规
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int i, j, minIndex, temp;
        for (i = 0; i < nums.size() - 1; i++) {
            minIndex = i;
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[minIndex])
                    minIndex = j;
            }
            temp = nums[i];
            nums[i] = nums[minIndex];
            nums[minIndex] = temp;
        }
        return nums;
    }
};
//第二种
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int begin = 0, end = nums.size() - 1;
        while (begin < end) {
            int maxi = begin, mini = begin;
            for (int i = begin; i <= end; i++) {
                if (nums[i] > nums[maxi])
                    maxi = i;
                if (nums[i] < nums[mini])
                    mini = i;
            }
            swap(nums[begin], nums[mini]);
            if (begin == maxi)
                maxi = mini;
            swap(nums[maxi], nums[end]);
            ++begin;
            --end;
        }
        return nums;
    }
};

//堆排序
class Solution {
public:
    void AdjustDown(vector<int>& a, int n, int parent)
    {
        int child = parent * 2 + 1;
        while (child < n) {
            if (child + 1 < n && a[child + 1] > a[child])
                ++child;
            if (a[child] > a[parent]) {
                swap(a[child], a[parent]);
                parent = child;
                child = parent * 2 + 1;
            }
            else {
                break;
            }
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        for (int i = (nums.size() - 1 - 1); i >= 0; i--) {
            AdjustDown(nums, nums.size(), i);
        }
        int end = nums.size() - 1;
        while (end > 0) {
            swap(nums[0], nums[end]);
            AdjustDown(nums, end, 0);
            --end;
        }
        return nums;
    }
};

//冒泡排序
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int j = 0; j < nums.size(); ++j) {
            bool exchange = false;
            for (int i = 1; i < nums.size() - j; i++)
            {
                if (nums[i - 1] > nums[i])
                {
                    int tmp = nums[i];
                    nums[i] = nums[i - 1];
                    nums[i - 1] = tmp;

                    exchange = true;
                }
            }

            if (exchange == false)
            {
                break;
            }
        }
        return nums;
    }
};

//快速排序
class Solution {
public:
    int GetMidIndex(vector<int>& a, int left, int right)
    {
        int mid = (left + right) >> 1;
        if (a[left] < a[mid])
        {
            if (a[mid] < a[right])
            {
                return mid;
            }
            else if (a[left] < a[right])
            {
                return right;
            }
            else
            {
                return left;
            }
        }
        else // a[left] > a[mid]
        {
            if (a[mid] > a[right])
            {
                return mid;
            }
            else if (a[left] > a[right])
            {
                return right;
            }
            else
            {
                return left;
            }
        }
    }
    void QuickSort(vector<int>& a, int begin, int end)
    {
        if (begin >= end)
            return;

        int keyi = PartSort3(a, begin, end);
        QuickSort(a, begin, keyi - 1);
        QuickSort(a, keyi + 1, end);
    }

    int PartSort3(vector<int>& a, int left, int right)
    {
        int midi = GetMidIndex(a, left, right);
        swap(a[left], a[midi]);

        int prev = left;
        int cur = left + 1;
        int keyi = left;
        while (cur <= right) {
            if (a[cur] < a[keyi] && ++prev != cur) {
                swap(a[prev], a[cur]);
            }
            ++cur;
        }
        swap(a[prev], a[keyi]);
        keyi = prev;
        return keyi;
    }
    vector<int> sortArray(vector<int>& nums) {
        QuickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

//计数排序
class Solution {
public:

    vector<int> sortArray(vector<int>& nums)
    {
        // 找到数组中的最大值和最小值
        int minVal = INT_MAX, maxVal = INT_MIN;
        for (int num : nums) {
            minVal = min(minVal, num);
            maxVal = max(maxVal, num);
        }

        // 统计每个元素出现的次数
        vector<int> count(maxVal - minVal + 1, 0);
        for (int num : nums) {
            count[num - minVal]++;
        }

        // 根据统计结果重新构造排序后的数组
        vector<int> sortedArray;
        for (int i = 0; i < count.size(); i++) {
            for (int j = 0; j < count[i]; j++) {
                sortedArray.push_back(i + minVal);
            }
        }

        return sortedArray;
    }
};