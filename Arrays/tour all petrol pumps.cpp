int tour(petrolPump p[],int n)
{
   //Your code here
   int sum=0,diff=0,start=0;
   for(int i=0;i<n;i++){
       sum+=p[i].petrol-p[i].distance;
       if(sum<0){
           start=i+1;
           diff+=sum;
           sum=0;
       }
   }
   if(sum+diff>0)
   return start;
   else 
   return -1;
}
