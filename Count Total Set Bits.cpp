#include <bits/stdc++.h>

using namespace std;

int solve(int A) {
    int len = 0, a = A, t, p = 1;
    long ans = 0;
    while (a > 0) {
        len++;
        a /= 2;
    }
    for (int i = 0; i < len; i++) {
        t = p * ((A + 1) / (2 * p));
        t = max(A + 1 - t - p, t);
        p *= 2;
        ans += t;
    }
    return ans % (1000000007);
}