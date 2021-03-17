// https://www.interviewbit.com/problems/min-xor-value/

#include <bits/stdc++.h>

using namespace std;

int findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int m = INT_MAX, i = 0;
    for(;i+1<A.size();i++) m = min(m, A[i]^A[i+1]);
    return m;
}
