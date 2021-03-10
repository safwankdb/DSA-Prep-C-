// https://www.interviewbit.com/problems/chain-of-pairs/

#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> &A) {
    int i, j, ans, m = 0;
    vector<int> LIS;
    for (i = 0; i < A.size(); i++) {
        ans = 0;
        for (j = 0; j < i; j++)
            if (A[j][1] < A[i][0]) ans = max(ans, LIS[j]);
        LIS.push_back(ans + 1);
        m = max(m, LIS[i]);
    }
    return m;
}
