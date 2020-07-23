/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/

#include <vector>

using namespace std;


class Solution
{
public:
    vector<int> vector_of_nums;
    void recursion_func(int n, int k)
    {
        vector_of_nums.push_back(n % 10);
        n -= vector_of_nums[k];
        n /= 10;
        k++;
        if (n > 0)
        {
            recursion_func(n, k);
        }
    }
    int subtractProductAndSum(int n)
    {
        int k = 0;
        recursion_func(n, k);
        int t1 = 1;
        int t2 = 0;
        for (auto i : vector_of_nums)
        {
            t1 *= i;
            t2 += i;
        }
        return t1 - t2;
    }
};

//Runtime: 0 ms
//Memory Usage : 6 MB