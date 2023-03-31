vector<int> tree;
void inorder(TreeNode *root)
{
    if (!root)
        return;
    inorder(root->left);
    tree.push_back(root->val);
    inorder(root->right);
}
bool isValidBST(TreeNode *root)
{
    inorder(root);
    for (int i = 1; i < tree.size(); i++)
    {
        if (tree[i] <= tree[i - 1])
            return false;
    }
    return true;
}