int ans = 0;
int sumOfLeftLeaves(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
    {
        ans += root->left->val;
    }
    int left = sumOfLeftLeaves(root->left);
    int right = sumOfLeftLeaves(root->right);

    return ans;
}