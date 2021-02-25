#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrder(TreeNode *A) {
    vector<TreeNode *> frontier = {A}, next;
    vector<vector<int>> ans;
    vector<int> temp;
    while (!frontier.empty()) {
        next.clear();
        temp.clear();
        for (auto x : frontier) {
            temp.push_back(x->val);
            if (x->left) next.push_back(x->left);
            if (x->right) next.push_back(x->right);
        }
        ans.push_back(temp);
        frontier = next;
    }
    return ans;
}
