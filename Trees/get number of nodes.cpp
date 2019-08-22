int getCountOfNode(Node *root, int l, int h)
{
  // your code goes here   
  int count=0;
  if(root==NULL)
  return 0;
  queue<Node *>q;
  q.push(root);
  while(!q.empty()){
      Node *temp=q.front();
      q.pop();
      if(temp->data>=l && temp->data<=h)
      count++;
      if(temp->left)
      q.push(temp->left);
      if(temp->right)
      q.push(temp->right);
  }
  return count;
}
