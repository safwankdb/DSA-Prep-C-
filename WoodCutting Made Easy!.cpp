#include <bits/stdc++.h>

using namespace std;

bool isFeasible(vector<int> &A, int B, int H) {
    int sum = 0;
    for (auto &a : A)
        if (sum >= B) {
            return true;
        } else if (a > H) {
            sum += a - H;
        }
    return sum >= B;
}

int solve(vector<int> &A, int B) {
    int lo = 0, mid;
    int hi = *max_element(A.begin(), A.end());
    while (lo < hi - 1) {
        mid = (lo + hi) / 2;
        if (isFeasible(A, B, mid)) {
            lo = mid;

        } else {
            hi = mid - 1;
        }
    }
    return isFeasible(A, B, hi) ? hi : lo;
}
