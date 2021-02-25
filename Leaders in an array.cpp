#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> &A) {
    int mx = 0;
    vector<int> ans;
    for (int i = A.size() - 1; i > -1; i--) {
        if (A[i] > mx) {
            ans.push_back(A[i]);
            mx = A[i];
        }
    }
    return ans;
}