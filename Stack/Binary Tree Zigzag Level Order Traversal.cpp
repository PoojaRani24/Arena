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
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        vector<int>temp;
        stack<TreeNode*>s1,s2;
        s1.push(root);
        bool turn=false;
        while(!s1.empty()){
        while(!s1.empty()){
            TreeNode* curr=s1.top();
            temp.push_back(curr->val);
            if(turn==false){
                if(curr->left)
                    s2.push(curr->left);
                if(curr->right)
                    s2.push(curr->right);
            }
            else{
                if(curr->right)
                    s2.push(curr->right);
                if(curr->left)
                    s2.push(curr->left);
            }
            s1.pop();
        }
            ans.push_back(temp);
            temp.clear();
        turn=!turn;
        swap(s1,s2);
        }
        return ans;
    }
};
