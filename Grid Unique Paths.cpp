// https://www.interviewbit.com/problems/grid-unique-paths/

#include <bits/stdc++.h>

using namespace std;

int uniquePaths(int A, int B) {
    int x = max(A, B) - 1;
    int y = min(A, B) - 1;
    long num = 1, den = 1;
    for (int i = 1; i <= y; i++) {
        num *= (x + i);
        den *= i;
    }
    return num / den;
}
