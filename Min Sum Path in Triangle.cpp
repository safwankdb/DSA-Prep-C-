// https://www.interviewbit.com/problems/min-sum-path-in-triangle/

#include <bits/stdc++.h>

using namespace std;

int minimumTotal(vector<vector<int>> &A) {
    for (int i = A.size() - 2; i >= 0; i--)
        for (int j = 0; j < A[i].size(); j++)
            A[i][j] += min(A[i + 1][j], A[i + 1][j + 1]);
    return A[0][0];
}
