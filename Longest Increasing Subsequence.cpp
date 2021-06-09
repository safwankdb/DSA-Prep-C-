// https://www.interviewbit.com/problems/longest-increasing-subsequence/

#include <bits/stdc++.h>

using namespace std;

int lis(const vector<int> &A) {
    int n = A.size(), ans = 1, m_len;
    vector<int> LIS = {1};
    for(int i=1; i<n; i++){
        m_len = 0;
        for(int j=i-1; j>-1; j--){
            if(A[i] > A[j]){
                m_len = max(m_len, 1+LIS[j]);
            }
        }
        if (m_len > 0){
            LIS.push_back(m_len);
        } else {
            LIS.push_back(1);
        }
        ans = max(ans, LIS.back());
    }
    return ans;
}