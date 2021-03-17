//https://www.interviewbit.com/problems/xor-ing-the-subarrays/

#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &A) {
    int ans = 0, n = A.size(), k;
    for (int i = 0; i < n; i++) {
        k = (i+1) * (n-i);
        if (k%2) ans ^= A[i];
    }
    return ans;
}
