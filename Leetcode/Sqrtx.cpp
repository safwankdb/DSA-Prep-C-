// https://leetcode.com/problems/sqrtx/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        float a = 1;
        for(int i = 0; i < 20; i++)
            a = (a + x/a)/2;
        int b = floor(a);
        return (b*b > x) ? b-1 : b;
    }
};
