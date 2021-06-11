// https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), len = 0, mx = 0, i;
        if (n == 0) return 0;
        vector<bool> visited(256, false);
        vector<int> dp(n + 1, 0);
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            int a1 = dp[i - 1], a2 = 1, k = i - 2;
            fill(visited.begin(), visited.end(), false);
            visited[s[i - 1]] = true;
            while (k >= 0) {
                if (visited[s[k]]) break;
                visited[s[k]] = true;
                a2++;
                k--;
            }
            dp[i] = max(a1, a2);
        }
        return dp[n];
    }
};
