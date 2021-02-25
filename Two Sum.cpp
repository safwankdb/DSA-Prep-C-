// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> M;
        for (int i = 0; i < nums.size(); i++) {
            if (M.count(target - nums[i]) > 0) {
                return {i, M[target - nums[i]]};
            }
            M[nums[i]] = i;
        }
        return {};
    }
};
