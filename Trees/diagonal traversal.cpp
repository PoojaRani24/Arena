void diagonal(Node *root,int hd,map<int,vector<int>>&m){
    if(root==NULL)
    return;
    m[hd].push_back(root->data);
    diagonal(root->left,hd+1,m);
    diagonal(root->right,hd,m);
}

void diagonalPrint(Node *root)
{
   // your code here
   map<int,vector<int>>m;
   diagonal(root,0,m);
   map<int,vector<int>>::iterator itr;
   for(itr=m.begin();itr!=m.end();itr++){
       vector<int>p=itr->second;
       for(int i=0;i<p.size();i++)
           cout<<p[i]<<" ";
   }
}
