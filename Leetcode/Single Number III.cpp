// https://leetcode.com/problems/single-number-iii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> singleNumber(vector<int>& nums) {
        int a = 0, b = 0, c = 0, mask = 1;
        for (int n : nums) a ^= n;
        for (; (a & mask) == 0; mask <<= 1)
            ;
        for (int n : nums)
            if ((n & mask) == 0)
                b ^= n;
            else
                c ^= n;
        return {b, c};
    }
};