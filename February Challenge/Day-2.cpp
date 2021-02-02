class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(!root) return nullptr; 
        if(root->val > R) 
        {
            root->right = nullptr;
            return trimBST(root->left, L, R);
        }
        else if(root->val < L)
        {
            root->left = nullptr;
            return trimBST(root->right, L, R);
        }
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};