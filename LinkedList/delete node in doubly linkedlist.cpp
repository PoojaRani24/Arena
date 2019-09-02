void deleteNode(Node **head_ref, int x)
{
  //Your code here
  Node *temp=*head_ref;
  x--;
  if(x==0)
  {  //delete head;
      *head_ref=temp->next;
      temp->next=NULL;
      free(temp);
  }
  else{
      while(x){
          temp=temp->next;
          x--;
      }
          if(temp->next){
          temp->prev->next=temp->next;
          temp->next->prev=temp->prev;
          temp->next=NULL;
          temp->prev=NULL;
          free(temp);
          }
          else{
              temp->prev->next=NULL;
          temp->prev=NULL;
          free(temp);
          }
  }
}
