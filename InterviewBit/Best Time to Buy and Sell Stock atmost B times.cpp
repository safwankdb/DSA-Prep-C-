#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &A, int B) {
    int n = A.size();
    int k = min(B, n);
    vector<vector<int>> dp(n, vector<int>(k + 1, 0));
    vector<int> minDiff(k + 1, INT_MIN);
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < k + 1; j++) {
            minDiff[j] = max(dp[i - 1][j - 1] - A[i - 1], minDiff[j]);
            dp[i][j] = max(dp[i - 1][j], A[i] + minDiff[j]);
        }
    }
    return dp[n - 1][k];
}
