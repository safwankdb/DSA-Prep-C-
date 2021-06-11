#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &A, int B) {
    int hi = A.size(), lo = 0;
    for (int mid = hi / 2; lo < hi; mid = (lo + hi) / 2) {
        if (B > A[mid]) {
            lo = mid + 1;
        } else if (B < A[mid]) {
            hi = mid - 1;
        } else {
            return mid;
        }
    }
    return (A[lo] >= B) ? lo : lo + 1;
}
