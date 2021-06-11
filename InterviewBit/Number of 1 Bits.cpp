#include <bits/stdc++.h>

using namespace std;

int numSetBits(unsigned int A) {
    int n = 0;
    while(A!=0){
        n += (A&1);
        A >>= 1;
    }
    return n;
}