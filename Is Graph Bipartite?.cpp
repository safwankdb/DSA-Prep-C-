#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    bool check(vector<vector<int>>& graph, vector<int>& colors, int i) {
        colors[i] = 0;
        vector<int> frontier = {i}, next;
        for (; !frontier.empty(); frontier = next) {
            next.clear();
            for (auto u : frontier) {
                for (auto v : graph[u]) {
                    if (colors[v] != -1) {
                        if (colors[v] == colors[u]) return false;
                    } else {
                        colors[v] = 1 - colors[u];
                        next.push_back(v);
                    }
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colors(graph.size(), -1);
        for (int i = 0; i < graph.size(); i++) {
            if (colors[i] == -1)
                if (!check(graph, colors, i)) return false;
        }
        return true;
    }
};