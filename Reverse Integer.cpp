// https://www.interviewbit.com/problems/reverse-integer/

#include <bits/stdc++.h>

using namespace std;

int reverse(int A) {
    int sign = (A >= 0) ? 1 : -1;
    A *= sign;
    string s = to_string(A);
    std::reverse(s.begin(), s.end());
    try {
        return sign * stoi(s);
    } catch (out_of_range err) {
        return 0;
    }
}
