// https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

#include <bits/stdc++.h>

using namespace std;

int nCr(int n, int r) {
    r  = min(r, n -r);
    long num = 1, den = 1, i;
    for (i = n - r + 1; i <= n; i++) num *= i;
    for (i = 1; i <= r; i++) den *= i;
    return num / den;
}

vector<int> getRow(int A) {
    vector<int> ans;
    for (int i = 0; i <= A; i++) ans.push_back(nCr(A, i));
    return ans;
}
