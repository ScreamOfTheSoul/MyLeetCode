/*
Given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/

class Solution {
public:
    void recursion_func(int num, int temp, int& position, bool& flag)
    {
        int new_num = 0;
        if (num % 10 == 6)
        {
            position = temp;
            flag = true;
        }
        new_num = (num - (num % 10)) / 10;
        if (new_num % 10 > 0)
        {
            temp++;
            recursion_func(new_num, temp, position, flag);
        }
    }

    int maximum69Number(int num)
    {
        bool flag = false;
        int temp = 0;
        int position = 0;
        recursion_func(num, temp, position, flag);
        int mult = 1;
        for (int i = 0; i < position; i++)
        {
            mult *= 10;
        }
        if (flag == true)
            return num = num - 6 * mult + 9 * mult;
        else return num;
    }
};

//Runtime: 4 ms
//Memory Usage : 6.2 MB