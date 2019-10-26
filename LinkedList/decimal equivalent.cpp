
long long unsigned int decimalValue(Node *head)
{
   Node *ptr=head;
   long long unsigned int sum=0;
   while(ptr){
       sum=(sum*2)+ptr->data;
       sum=sum%1000000007;
       ptr=ptr->next;
   }
   return sum%1000000007;
}
