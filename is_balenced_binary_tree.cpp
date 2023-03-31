int height(TreeNode *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
bool isBalanced(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    int ans;
    int left = height(root->left);
    int right = height(root->right);
    if (abs(left - right) > 1)
    {
        return false;
    }
    return isBalanced(root->left) & isBalanced(root->right);
}