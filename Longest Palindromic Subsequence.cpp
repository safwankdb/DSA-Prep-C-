// https://www.interviewbit.com/problems/longest-palindromic-subsequence/

#include <bits/stdc++.h>

using namespace std;

int solve(string A) {
    int n = A.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j < n; j++) {
            if (i == j) {
                dp[i][j] = 1;
            } else if (A[i] == A[j]) {
                dp[i][j] = 2 + dp[i + 1][j - 1];
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[0][n - 1];
}

int main() {
    cout << solve("bebdeeedaddecebbbbbabebedc") << endl;
}
