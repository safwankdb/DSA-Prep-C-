// https://www.interviewbit.com/problems/intersecting-chords-in-a-circle/

#include <bits/stdc++.h>

using namespace std;

int chordCnt(int A) {
    int mod = pow(10, 9) + 7;
    int p, sum, i;
    long dp[A + 1];
    dp[0] = 1;
    for (p = 1; p <= A; p++) {
        sum = 0;
        for (i = 0; i <= p - 1; i++) {
            sum += (dp[i] * dp[p - i - 1]) % mod;
            sum %= mod;
        }
        dp[p] = sum;
    }
    return dp[A];
}