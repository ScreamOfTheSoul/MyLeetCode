/*
Let's call an array A a mountain if the following properties hold:

    A.length >= 3
    There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]

Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].
*/

#include <vector>

using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int>& A)
    {
        for (int i = 0; i < A.size() - 1; i++)
        {
            if (A[i + 1] < A[i])
            {
                return i;
                break;
            }
        }
        return 123;
    }
};


//runtime: 24 ms
//memory usage: 11.6 MB