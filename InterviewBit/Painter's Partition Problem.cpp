#include <bits/stdc++.h>
#define MOD 10000003

using namespace std;

bool isFeasible(int A, vector<int> &C, long m) {
    int a = 0, i = 0, curr_sum = 0;
    while (i < C.size()) {
        if (curr_sum + C[i] <= m) {
            curr_sum += C[i];
            i++;
        } else if (curr_sum == 0 || a == A - 1) {
            return false;
        } else {
            curr_sum = 0;
            a++;
        }
    }
    return true;
}

int paint(int A, int B, vector<int> &C) {
    long mid, lo = 0, hi = accumulate(C.begin(), C.end(), 0);
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (isFeasible(A, C, mid)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    return ((B % MOD) * (hi % MOD)) % MOD;
}
