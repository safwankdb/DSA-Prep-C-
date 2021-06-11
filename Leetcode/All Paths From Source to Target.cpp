// https://leetcode.com/problems/all-paths-from-source-to-target/

#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    map<int, vector<vector<int>>> memory;

    vector<vector<int>> getPathFrom(vector<vector<int>>& graph, int start) {
        if (memory.count(start) > 0) {
            return memory[start];
        }
        vector<vector<int>> ans;
        if (start == graph.size() - 1) {
            ans.push_back({start});
            memory[start] = ans;
            return ans;
        }
        for (auto x : graph[start]) {
            auto res = getPathFrom(graph, x);
            if (!res.empty()) {
                for (auto& r : res) {
                    r.push_back(start);
                    ans.push_back(r);
                }
            }
        }
        memory[start] = ans;
        return ans;
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        auto ans = getPathFrom(graph, 0);
        for (auto& a : ans) {
            reverse(a.begin(), a.end());
        }
        return ans;
    }
};
