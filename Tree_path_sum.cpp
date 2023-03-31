bool hasPathSum(TreeNode *root, int targetSum)
{
    if (root == nullptr)
    {
        return 0;
    }
    if (root->left == nullptr && root->right == nullptr && targetSum - root->val == 0)
    {
        return true;
    }
    if (hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val))
    {
        return true;
    }
    return false;
}