#include <bits/stdc++.h>

using namespace std;

unsigned int reverse(unsigned int A) {
    unsigned int ans = 0;
    for (int i = 31; i >= 0 && A > 0; i--) {
        if (A & 1) {
            ans += pow(2, i);
        }
        A >>= 1;
    }
    return ans;
}
