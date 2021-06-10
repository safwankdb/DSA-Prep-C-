// https://www.interviewbit.com/problems/tushars-birthday-party/

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vl vector<long>

int solve(const vi &A, const vi &B, const vi &C) {
    int n = B.size(), capacity = *max_element(A.begin(), A.end());
    auto dp = vector<vl>(capacity + 1, vl(n + 1, 0));
    for (int i = 1; i <= capacity; i++) dp[i][0] = INT_MAX;
    for (int i = 1; i <= capacity; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= B[j - 1])
                dp[i][j] = min(C[j - 1] + dp[i - B[j - 1]][j], dp[i][j - 1]);
            else
                dp[i][j] = dp[i][j - 1];
        }
    }
    int sum = 0;
    for (int a : A) sum += dp[a][n];
    return sum;
}
