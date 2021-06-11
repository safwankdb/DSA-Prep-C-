#include <bits/stdc++.h>

using namespace std;

int trap(const vector<int> &A) {
    int n = A.size(), water = 0;
    vector<int> left(n, 0), right(n, 0);
    left[0] = A[0];
    right[n - 1] = A[n - 1];
    for (int i = 1; i < n; i++) {
        left[i] = max(A[i - 1], left[i - 1]);
        right[n - i - 1] = max(A[n - i], right[n - i]);
    }
    for (int i = 1; i < n - 1; i++) {
        water += max(0, min(left[i], right[i]) - A[i]);
    }
    return water;
}
