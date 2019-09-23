void bottomView(Node *root)
{
   // Your Code Here
   queue<pair<Node *,int>>q;
   map<int,int>m;
   q.push(make_pair(root,0));
   while(!q.empty()){
       pair<Node *,int>p=q.front();
       Node *temp=p.first;
       int d=p.second;
       q.pop();
       //if(m.find(d)==m.end())
       m[d]=temp->data;
       if(temp->left)
       q.push(make_pair(temp->left,d-1));
       if(temp->right)
       q.push(make_pair(temp->right,d+1));
   }
   map<int,int>::iterator it;
   for( it=m.begin();it!=m.end();it++)
       cout<<it->second<<" ";
}
