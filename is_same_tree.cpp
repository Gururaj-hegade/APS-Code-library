bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return 1;
        }
        else if(p==NULL && q!=NULL)
        {
            return 0;
        }
        else if(p!=NULL && q==NULL)
        {
            return 0;
        }
        else if(p->val!=q->val)
        {
            return 0;
        }
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }