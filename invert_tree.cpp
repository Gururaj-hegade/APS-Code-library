TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
    {
        return root;
    }
    TreeNode *temp1, *temp2;
    temp1 = invertTree(root->left);
    temp2 = invertTree(root->right);
    root->right = temp1;
    root->left = temp2;
    return root;
}