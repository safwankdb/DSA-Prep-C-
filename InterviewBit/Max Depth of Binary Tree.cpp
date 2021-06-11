#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode *A) {
    if (!A) return 0;
    return 1 + max(maxDepth(A->left), maxDepth(A->right));
}
