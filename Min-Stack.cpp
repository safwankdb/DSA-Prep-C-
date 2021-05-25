// https://www.interviewbit.com/problems/min-stack/

#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int, int>> S;

    MinStack::MinStack() {
        stack<pair<int, int>> temp;
        S = temp;
    }

    void MinStack::push(int x) {
        if (S.empty()) {
            S.push({x, x});
        } else {
            S.push({x, min(x, S.top().second)});
        }
    }

    void MinStack::pop() {
        if (!S.empty()) S.pop();
    }

    int MinStack::top() {
        if (!S.empty()) {
            return S.top().first;
        } else {
            return -1;
        }
    }

    int MinStack::getMin() {
        if (!S.empty()) {
            return S.top().second;
        } else {
            return -1;
        }
    }
};
