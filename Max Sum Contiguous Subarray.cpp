#include <bits/stdc++.h>

using namespace std;

int maxSubArray(const vector<int> &A) {
    int best = INT_MIN, curr = 0;
    for (int x : A) {
        curr = max(x, curr + x);
        best = max(best, curr);
    }
    return best;
}
