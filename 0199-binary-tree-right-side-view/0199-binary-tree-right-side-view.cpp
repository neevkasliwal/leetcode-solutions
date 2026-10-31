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
    void printRight(TreeNode * root , vector<int>& ans,int level,int& maxLevel){
        
        if(root == NULL) return ;
        if(maxLevel<level){
            ans.push_back(root->val);
            maxLevel = level;
        }

        printRight(root->right,ans,level+1,maxLevel);
        printRight(root->left,ans,level+1,maxLevel);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int maxLevel = 0;
        printRight(root,ans,1,maxLevel);
        return ans;
    }
};