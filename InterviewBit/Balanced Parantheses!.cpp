// https://www.interviewbit.com/problems/balanced-parantheses/

#include <bits/stdc++.h>

using namespace std;

int solve(string A) {
    stack<char> S;
    for(char c : A){
        if(c=='('){
            S.push(c);
        } else {
            if(S.empty()) return false;
            else S.pop();
        }
    }
    return S.empty();
}

