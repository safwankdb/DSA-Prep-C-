// https://leetcode.com/problems/coin-change/

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        auto dp = vector<int>(amount + 1, amount + 1);
        dp[0] = 0;
        for (int a = 1; a <= amount; a++)
            for (int i = 0; i < coins.size() && coins[i] <= a; i++)
                dp[a] = min(dp[a], dp[a - coins[i]] + 1);
        return (dp[amount] > amount) ? -1 : dp[amount];
    }
};