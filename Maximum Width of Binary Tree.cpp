class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int count=0;
        queue<pair<TreeNode*,int>>q;
        if(root)
            q.push(make_pair(root,0));
        while(!q.empty()){
            int size=q.size();
            pair<TreeNode*,int>x=q.front();
            pair<TreeNode*,int>y;
            unsigned long long int left=x.second,right;
            while(size--){
                y=q.front();
                right=y.second;
                q.pop();
                if(y.first->left)
                   q.push(make_pair(y.first->left,2*right));
                if(y.first->right)
                   q.push(make_pair(y.first->right,2*right+1));

            }
            count=max(count,(int)(right-left+1));
        }
        return count;
        }
};
 
