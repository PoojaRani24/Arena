int sumLeaf(Node* root)
{
    // Code here
    if(root==NULL)
    return 0;
    queue<Node *>q;
    q.push(root);
    int sum=0;
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp->left==NULL && temp->right==NULL)
        sum+=temp->data;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return sum;
}
