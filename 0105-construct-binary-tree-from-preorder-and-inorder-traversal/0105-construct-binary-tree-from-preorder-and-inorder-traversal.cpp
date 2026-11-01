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
    int preIndex = 0;
    unordered_map<int,int> mp;
    TreeNode* cTree(vector<int>& inorder , vector<int>& preorder , int is , int ie){
        if(is>ie) return NULL;

        TreeNode* root = new TreeNode(preorder[preIndex++]);

        // int inIndex;
        // for(int i = is ; i<= ie;i++){
        //     if(inorder[i] == root->val){
        //         inIndex = i;
        //         break;
        //     }
        // } 
        // We can even use hashing over here 
        int inIndex = mp[root->val];
        root->left = cTree(inorder,preorder,is,inIndex-1);
        root->right = cTree(inorder,preorder,inIndex+1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preIndex = 0;
        mp.clear();
        for(int i = 0 ; i< inorder.size();i++){
            mp[inorder[i]] = i;
        }
        return cTree(inorder,preorder,0,inorder.size()-1);
        
    }
};