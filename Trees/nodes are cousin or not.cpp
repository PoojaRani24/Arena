void traverse(Node *root,vector<pair<int,pair<int,int>>> &v,int parent,int level){
    //v.push_back(make_pair(4,make_pair(5,6)));
   //cout<<v[1].first<<" "<<v[1].second.first<<" "<<v[1].second.second<<endl;
    if(root==NULL)
    return;
    v.push_back(make_pair(root->data,make_pair(parent,level)));
    if(root->left)
    traverse(root->left,v,root->data,level+1);
    if(root->right)
    traverse(root->right,v,root->data,level+1);
}
    

bool isCousins(Node *root, int x, int y)
{
   //add code here.
   vector<pair<int, pair<int,int> > >v;
   //v.push_back(make_pair(1,make_pair(2,3)));
  // cout<<v[0].first<<" "<<v[0].second.first<<" "<<v[0].second.second<<endl;
   traverse(root,v,-1,1);
   int par1,par2,lev1,lev2;
   //cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
       int cousin=v[i].first;
       //cout<<"coo"<<cousin<<endl;
       if(x==cousin){
        par1=v[i].second.first;
        lev1=v[i].second.second;}
       if(y==cousin){
        par2=v[i].second.first;
        lev2=v[i].second.second;}
       // cout<<lev1<<" "<<lev2<<" "<<par1<<" "<<par2<<endl;
   }
   if(lev1==lev2 && par1!=par2)
       return 1;
       else 
       return 0;
}
