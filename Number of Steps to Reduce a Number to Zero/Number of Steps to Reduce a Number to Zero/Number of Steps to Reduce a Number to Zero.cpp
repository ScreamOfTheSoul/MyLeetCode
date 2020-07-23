/*
Given a non-negative integer num, return the number of steps to reduce it to zero. 
If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
*/

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int temp = 0;
        while (num != 0)
        {
            if (num % 2 > 0)
                num -= 1;
            else num /= 2;
            temp++;
        }
        return temp;
    }
};

//Runtime: 0 ms
//Memory Usage : 6 MB