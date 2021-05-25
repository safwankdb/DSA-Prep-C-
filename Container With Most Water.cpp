// https://www.interviewbit.com/problems/container-with-most-water/

#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &A) {
    int lo = 0, hi = A.size() - 1, m = 0;
    while (lo < hi) {
        if (A[lo] < A[hi]) {
            m = max(m, A[lo] * (hi - lo));
            lo++;
        } else {
            m = max(m, A[hi] * (hi - lo));
            hi--;
        }
    }
    return m;
}