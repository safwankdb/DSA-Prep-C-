// https://www.interviewbit.com/problems/sum-root-to-leaf-numbers/

#include <bits/stdc++.h>

using namespace std;

// Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void f(TreeNode *A, int n, int &sum) {
    int tmp = ((10 * n) % 1003 + A->val) % 1003;
    if (A->left == NULL && A->right == NULL) sum = (sum + tmp) % 1003;
    if (A->left) f(A->left, tmp, sum);
    if (A->right) f(A->right, tmp, sum);
}

int sumNumbers(TreeNode *A) {
    int sum = 0;
    f(A, 0, sum);
    return sum;
}
