int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  if(root==NULL)
  return 0;
  queue<Node *>q;
  q.push(root);
  while(!q.empty()){
      Node *temp=q.front();
      q.pop();
      if(temp->left==NULL && temp->right==NULL)
      count++;
      if(temp->left)
      q.push(temp->left);
      if(temp->right)
      q.push(temp->right);
  }
  return count;
}
