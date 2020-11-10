/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root,int &fsum)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int sum=root->val;
    
    int suml=helper(root->left,fsum);
    int sumr=helper(root->right,fsum);
    
    fsum+=abs(suml-sumr);
    
    return sum+suml+sumr;
}


int findTilt(TreeNode* root) {
    
    int fsum=0;
    helper(root,fsum);
    
    
    return fsum;
}
};