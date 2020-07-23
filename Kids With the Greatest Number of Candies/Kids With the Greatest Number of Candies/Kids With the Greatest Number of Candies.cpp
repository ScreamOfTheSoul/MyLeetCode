/*
Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have 
the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.
*/

#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        vector<bool> answer;
        int temp = 0;
        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] > temp)
                temp = candies[i];
        }
        for (auto j : candies)
        {
            if (j + extraCandies >= temp)
                answer.push_back(true);
            else answer.push_back(false);
        }
        return answer;
    }
};

//Runtime: 4 ms
//Memory Usage : 9.1 MB