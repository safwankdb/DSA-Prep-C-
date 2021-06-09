// https://www.interviewbit.com/problems/stairs/

#include <bits/stdc++.h>

using namespace std;

int climbStairs(int A) {
    int a = 1, b = 0, c;
    for (int i = 0; i < A; i++) {
        c = a + b;
        b = a;
        a = c;
    }
    return a;
}
