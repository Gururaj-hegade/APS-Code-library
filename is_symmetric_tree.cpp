bool help(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;
    else if (root1 == NULL or root2 == NULL)
        return 0;
    else if (root1->val != root2->val)
        return false;
    return (help(root1->left, root2->right) && help(root1->right, root2->left));
}
bool isSymmetric(TreeNode *root)
{
    bool ans;
    ans = help(root, root);
    return ans;
}