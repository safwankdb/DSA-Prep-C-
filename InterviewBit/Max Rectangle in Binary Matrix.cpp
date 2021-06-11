// https://www.interviewbit.com/problems/max-rectangle-in-binary-matrix/

#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> &A){
    int n = A.size(), area = 0;
    auto l = vector<int>(n, 0), r = vector<int>(n, n-1);
    stack<int> SL, SR;
    for(int i=0; i < n; i++){
        while(!SL.empty())
            if(A[i] <= A[SL.top()]){
                SL.pop();
            } else {
                l[i] = SL.top() + 1;
                break;
            }
        SL.push(i);
    }
    for(int i=n-1; i >= 0; i--){
        while(!SR.empty())
            if(A[i] <= A[SR.top()]){
                SR.pop();
            } else {
                r[i] = SR.top() - 1;
                break;
            }
        SR.push(i);
    }
    for(int i = 0; i < n; i++)
        area  = max(area, A[i] *(r[i] - l[i] + 1));
    return area;
}

int maximalRectangle(vector<vector<int>> &A) {
    int m = maxArea(A[0]);
    for(int i = 1; i < A.size(); i++){
        for(int j = 0; j < A[0].size(); j++)
            if(A[i][j]) A[i][j] += A[i-1][j];
        m = max(m, maxArea(A[i]));
    }
    return m;
}
