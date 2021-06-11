// https://www.interviewbit.com/problems/nearest-smaller-element/

#include <bits/stdc++.h>

using namespace std;

vector<int> prevSmaller(vector<int> &A) {
    stack<int> s;
    vector<int> ans;
    for(int i: A){
        if(s.empty()){
            ans.push_back(-1);
        } else if (i > s.top()){
            ans.push_back(s.top());
        } else {
            while(s.size() && i <= s.top())
                s.pop();
            if(s.size()) ans.push_back(s.top());
            else ans.push_back(-1);
        }
        s.push(i);
    }
    return ans;
}

