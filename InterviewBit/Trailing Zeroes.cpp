// https://www.interviewbit.com/problems/trailing-zeroes/

#include <bits/stdc++.h>

using namespace std;

int solve(int A) {
    int ans = 0;
    for (; !(A & 1); A >>= 1) ans++;
    return ans;
}
