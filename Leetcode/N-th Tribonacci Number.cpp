// https://leetcode.com/problems/n-th-tribonacci-number

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        int a = 1, b = 1, c = 0, tmp;
        for (int i = 0; i < n - 2; i++) {
            tmp = a;
            a = a + b + c;
            c = b;
            b = tmp;
        }
        return a;
    }
};