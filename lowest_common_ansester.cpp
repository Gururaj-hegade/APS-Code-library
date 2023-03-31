TreeNode *ans;
bool solve(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
        return 0;
    bool l = solve(root->left, p, q);
    bool r = solve(root->right, p, q);
    if (root == p || root == q)
    {
        if (l || r)
        {
            ans = root;
            return 0;
        }
        return 1;
    }

    if (l && r)
    {
        ans = root;
        return 0;
    }
    else if (l || r)
    {
        return 1;
    }
    else
        return 0;
}
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
    {
        return NULL;
    }
    bool k = solve(root, p, q);
    return ans;
}