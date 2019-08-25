Node *removeDuplicates(Node *root)
{
 // your code goes here
 Node *current=root;
 Node *temp=current->next;
 while(current->next){
     if(current->data==temp->data){
        current->next=temp->next;
        temp->next=NULL;
        free(temp);
        temp=current->next;
     }
     else{
         current=current->next;
         temp=temp->next;
     }
 }
 return root;
}
