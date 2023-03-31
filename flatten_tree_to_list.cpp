vector<TreeNode *> temp;
void solve(TreeNode *root)
{
    if (root != NULL)
    {
        temp.push_back(root);
        solve(root->left);
        solve(root->right);
    }
    return;
}
void flatten(TreeNode *root)
{
    if (root == NULL)
        return;
    solve(root);
    if (temp.size() == 1)
        return;
    root->left = NULL;
    root->right = temp[1];
    if (temp.size() == 2)
        return;
    TreeNode *cur;
    cur = root->right;

    for (int i = 1; i < temp.size(); i++)
    {
        cur->right = temp[i];
        cur->left = NULL;
        cur = cur->right;
    }

    return;
}