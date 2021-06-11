// https://www.interviewbit.com/problems/edit-distance/

#include <bits/stdc++.h>

using namespace std;

int minDistance(string A, string B) {
    int m = A.size(), n = B.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = i + j;
            } else if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
            }
        }
    }
    return dp[m][n];
}
