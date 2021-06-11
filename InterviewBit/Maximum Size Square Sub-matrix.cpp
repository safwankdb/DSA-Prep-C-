// https://www.interviewbit.com/problems/maximum-size-square-sub-matrix/

#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> &A) {
    int m = A.size(), n = A[0].size();
    int tmp, prev = 0, ans = 0, dp[n+1];
    dp[n] = 0;
    for(int j = 0; j < n; j++) {
        dp[j] = A[m-1][j];
        ans = max(ans, dp[j]);
    }
    for(int i = m-2; i >= 0; i--)
        for(int j = n-1; j >= 0; j--){
            tmp = dp[j];
            if(A[i][j] == 0) dp[j] = 0;
            else dp[j] = 1 + min(min(dp[j], dp[j+1]), prev);
            prev = tmp;
            ans = max(ans, dp[j]);
        }
    return ans*ans;
}


