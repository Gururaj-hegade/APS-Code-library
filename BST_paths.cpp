vector<string> ans;
void solve(TreeNode *root, string temp)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        temp += to_string(root->val);
        ans.push_back(temp);
        return;
    }
    temp += to_string(root->val);
    temp += "->";
    solve(root->left, temp);
    solve(root->right, temp);
    return;
}
vector<string> binaryTreePaths(TreeNode *root)
{
    if (root == NULL)
    {
        return {};
    }
    solve(root, "");
    return ans;
}