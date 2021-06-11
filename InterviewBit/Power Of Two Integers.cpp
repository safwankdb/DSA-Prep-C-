// https://www.interviewbit.com/problems/power-of-two-integers/

#include <bits/stdc++.h>

using namespace std;

int isPower(int A) {
    if (A == 1) return true;
    int n;
    bool flag;
    for (int x = 2; x <= A / 2; x++) {
        flag = true;
        for (n = A; n > 1; n /= x) {
            if (n % x != 0) {
                flag = false;
                break;
            }
        }
        if (flag) return true;
    }
    return false;
}
