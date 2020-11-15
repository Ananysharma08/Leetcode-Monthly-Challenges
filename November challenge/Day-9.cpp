class Solution {
public:
    int res=0;
    int maxAncestorDiff(TreeNode* root) {
       
        if(root==NULL)
            return 0;
        solve(root,root->val,root->val);
        return res;
    }
    
    void solve(TreeNode *root, int cmin, int cmax){
        if(root==NULL)
            return ;
        res=max(res,max(abs(root->val-cmin),abs(root->val-cmax)));
        cmin=min(cmin,root->val);
        cmax=max(cmax,root->val);
        
        solve(root->left,cmin,cmax);
        solve(root->right,cmin,cmax);
    }
  
};