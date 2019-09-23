void verticalOrder(Node *root)
{
    //Your code here
    if(root==NULL)
    return;
    map<int,vector<int>>m;
    queue<pair<Node *,int>>q;
    q.push({root,0});
    while(!q.empty()){
        pair<Node *,int>p=q.front();
        Node *temp=p.first;
        int hd=p.second;
        q.pop();
        m[hd].push_back(temp->data);
        if(temp->left)
        q.push(make_pair(temp->left,hd-1));
        if(temp->right)
        q.push(make_pair(temp->right,hd+1));
    }
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        int key=it->first;
        vector<int>p=it->second;
        for(int i=0;i<p.size();i++)
        cout<<p[i]<<" ";
    }
}
