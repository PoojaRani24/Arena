// function should return level of the target node

int glevel(Node *root, int target,int level){
    if(root==NULL)
    return 0;
    else if(root->data==target)
    return level;
    int result=glevel(root->left,target,level+1);
    if(result!=0)
    return result;
    result=glevel(root->right,target,level+1);
    return result;
}

int getLevel(struct Node *node, int target)
{
	//code here
	return glevel(node,target,1);
}
