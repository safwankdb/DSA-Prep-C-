// https://leetcode.com/problems/jump-game-ii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, 1e9);
        dp[1] = 0;
        // dp[i] = min num of jumps for an array of last i elements;
        for(int i = 1; i <= n; i++){
            for(int j=1; j<=nums[n-i] && i-j > 0; j++){
                dp[i] = min(dp[i], 1 + dp[i-j]); 
            }
        }
        return dp[n];
    }
};