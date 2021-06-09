// https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/

#include <bits/stdc++.h>
using namespace std;

string solve(string A) {
    queue<char> Q;
    string B = "";
    char x;
    int counts[26] = {0};
    for (char &a : A) {
        if (counts[a - 'a'] == 0) {
            Q.push(a);
        }
        counts[a - 'a']++;
        while (!Q.empty()) {
            x = Q.front();
            if (counts[x - 'a'] > 1) {
                Q.pop();
            } else {
                break;
            }
        }
        if (Q.empty()) x = '#';
        B += x;
    }
    return B;
}