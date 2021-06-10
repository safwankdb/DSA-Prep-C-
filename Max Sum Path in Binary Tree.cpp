// https://www.interviewbit.com/problems/max-sum-path-in-binary-tree/

#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int f(TreeNode *x, int &globalMax) {
    if (x == NULL) return 0;
    int l = max(0, f(x->left, globalMax)), r = max(0, f(x->right, globalMax));
    globalMax = max(globalMax, l + r + x->val);
    return x->val + max(l, r);
}

int maxPathSum(TreeNode *A) {
    int globalMax = INT_MIN;
    f(A, globalMax);
    return globalMax;
}