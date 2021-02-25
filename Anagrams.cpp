#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> anagrams(const vector<string> &A) {
    unordered_map<string, vector<int>> M;
    for(int i=0;i<A.size();i++){
        string s = A[i];
        sort(s.begin(), s.end());
        M[s].push_back(i+1);        
    }
    vector<vector<int>> ans;
    for(auto x: M){
        ans.push_back(x.second);
    }
    return ans;
}

