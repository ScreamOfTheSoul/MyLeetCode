/*
A peak element is an element that is greater than its neighbors.

Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

You may imagine that nums[-1] = nums[n] = -∞.
*/

#include <vector>

using namespace std;

class Solution
{
public:
    int recursion(vector<int>& nums, int left, int right)
    {
        int mid = left + (right - left) / 2;
        if (nums.size() == 1)
            return mid;
        if ((mid != 0) && (mid != nums.size() - 1))
        {
            if ((nums[mid] > nums[mid + 1]) && (nums[mid] > nums[mid - 1]))
                return mid;
        }
        if (mid != nums.size() - 1)
        {
            if (nums[mid] < nums[mid + 1])
            {
                left = mid + 1;
                return recursion(nums, left, right);
            };
        }
        else return mid;
        if (mid != 0)
        {
            if (nums[mid] < nums[mid - 1])
            {
                right = mid - 1;
                return recursion(nums, left, right);
            };
        }
        else return mid;
        return -123;
    }


    int findPeakElement(vector<int>& nums)
    {
        return recursion(nums, 0, nums.size() - 1);
    }
};


// Runtime: 8ms
// Memory Usage: 8.9 MB