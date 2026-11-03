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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }

        stack<TreeNode*> s1,s2;
        s1.push(root);

        while(!s1.empty() || !s2.empty()){
            vector<int> level1;

            while(!s1.empty()){
                
                TreeNode * node = s1.top();
                s1.pop();

                level1.push_back(node->val);

                if(node->left != NULL){
                    s2.push(node->left);
                }
                if(node->right != NULL){
                    s2.push(node->right);
                }
    
            }
            if(!level1.empty()){
                ans.push_back(level1);
            }

            vector<int> level2;
            while(!s2.empty()){
                TreeNode * node = s2.top();
                s2.pop();
                level2.push_back(node->val);

                if(node->right!=NULL){
                    s1.push(node->right);
                }
                if(node->left!=NULL){
                    s1.push(node->left);
                }
            }
            if(!level2.empty()){
                ans.push_back(level2);
            }
        }
        return ans;

        
    }
};