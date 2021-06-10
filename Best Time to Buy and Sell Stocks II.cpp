// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-ii/

#include <bits/stdc++.h>

using namespace std;

int maxProfit(const vector<int> &A) {
    int ans = 0, n = A.size();
    for (int i = 0; i < n - 1; i++) {
        if (A[i + 1] > A[i]) ans += A[i + 1] - A[i];
    }
    return ans;
}
