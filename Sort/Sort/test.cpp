#include<iostream>
using namespace std;
#include<vector>
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