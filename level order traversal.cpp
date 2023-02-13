#include<bits/stdc++.h>
vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root==NULL)
        {
            return {};
        }
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++)
            {
                TreeNode *t;
                t=q.front();
                int p=t->val;
                v.push_back(p);
                q.pop();
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
                
            }
            ans.push_back(v);
        }
        return ans;
}
