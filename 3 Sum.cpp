#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &A, int B) {
    int minima = INT_MAX, i, j, k, ans, s;
    sort(A.begin(), A.end());
    for (i = 0; i < A.size(); i++) {
        j = i + 1;
        k = A.size() - 1;
        while (j < k) {
            s = A[i] + A[j] + A[k];
            if (s > B) {
                if (s - B < minima) {
                    minima = s - B;
                    ans = s;
                }
                k--;
            } else if (s < B) {
                if (B - s < minima) {
                    minima = B - s;
                    ans = s;
                }
                j++;
            } else {
                return s;
            }
        }
    }
    return ans;
}
