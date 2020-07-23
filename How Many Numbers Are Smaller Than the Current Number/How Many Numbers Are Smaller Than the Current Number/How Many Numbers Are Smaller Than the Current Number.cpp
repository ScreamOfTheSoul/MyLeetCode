/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.
*/

#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
        vector<int> answer;
        for (auto i : nums)
        {
            int temp = 0;
            for (auto j : nums)
            {
                if (i > j)
                    temp++;
            }
            answer.push_back(temp);
        }
        return answer;
    }
};

//Runtime: 56 ms
//Memory Usage : 10.2 MB