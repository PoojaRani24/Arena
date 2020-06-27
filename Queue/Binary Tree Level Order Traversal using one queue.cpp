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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
            return ans;
        q.push(root);
        q.push(NULL);
        vector<int>temp;
        while(q.size()>1){
            TreeNode* curr=q.front();
            if(curr==NULL){
                q.pop();
                q.push(NULL);
                ans.push_back(temp);
                temp.clear();
               // cout<<endl;
            }
            else{
                 if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
              //  cout<<curr->val<<" ";
                temp.push_back(curr->val);
                 q.pop();
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
