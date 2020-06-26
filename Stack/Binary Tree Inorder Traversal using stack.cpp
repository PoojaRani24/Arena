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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>v;
        //s.push(root);
        TreeNode* curr=root;
        while(curr!=NULL || !s.empty()){
            while(curr!=NULL){
            s.push(curr);
                // cout<<curr->val<<" ";
            curr=curr->left;
        }
           TreeNode* temp=s.top();
            v.push_back(temp->val);
            s.pop();
            curr=temp->right;
        } 
        return v;
    }
};
