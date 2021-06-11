#include <bits/stdc++.h>

using namespace std;

int knight(int A, int B, int C, int D, int E, int F) {
    vector<vector<bool>> visited(A, vector<bool>(B, false));
    vector<pair<int, int>> frontier = {{C, D}};
    pair<int, int> target = {E, F};
    int curr_level = 0;
    int dx[] = {1, 2, 2, 1, -2, -1, -2, -1};
    int dy[] = {2, 1, -1, -2, -1, -2, 1, 2};
    vector<pair<int, int>> next;
    while (!frontier.empty()) {
        next.clear();
        for (auto f : frontier) {
            if (visited[f.first - 1][f.second - 1]) continue;
            visited[f.first - 1][f.second - 1] = true;
            if (f == target) return curr_level;
            for (int i = 0; i < 8; i++) {
                int x = f.first + dx[i], y = f.second + dy[i];
                if (x < 1 || x > A || y < 1 || y > B) continue;
                if (!visited[x - 1][y - 1]) next.push_back({x, y});
            }
        }
        frontier = next;
        curr_level++;
    }
    return -1;
}
