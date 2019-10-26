int min_ele=0;
void push(int a)
{
     //add code here.
     if(isEmpty()){
         min_ele=a;
         s.push(a);
     }
     else{
         if(a<min_ele){
             s.push((2*a)-min_ele);
             min_ele=a;
         }
         else
         s.push(a);
      }
    
}
bool isFull(int n)
{
     //add code here.
     return s.size()==n;
}
bool isEmpty()
{
    //add code here.
    return s.empty();
}
int pop()
{
    //add code here.
    if(!isEmpty()){
        int t=s.top();
        s.pop();
        if(t<min_ele){
            int temp=min_ele;
            min_ele=(2*min_ele)-t;
            return temp;
        }
        else{
            return t;
        }
    }
    //return NULL;
}
int getMin()
{
   //add code here.
   return min_ele;
}
