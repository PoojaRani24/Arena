void diagonal(Node *root,int hd,map<int,int>&m){
    if(root==NULL)
    return;
    m[hd]+=root->data;
    diagonal(root->left,hd+1,m);
    diagonal(root->right,hd,m);
}

void diagonalSum(Node* root)
{
 // Add your code here
 map<int,int>m;
 diagonal(root,0,m);
 map<int,int>::iterator itr;
 for(itr=m.begin();itr!=m.end();itr++)
     cout<<itr->second<<" ";
     cout<<endl;
}
