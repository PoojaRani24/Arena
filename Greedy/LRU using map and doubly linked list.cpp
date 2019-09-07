map<int,int>m;

struct node{
    int key;
    node *prev;
    node *next;
};
int maxi,current=0;

node *first;
node *lru;

LRUCache::LRUCache(int capacity) {
m.erase(m.begin(),m.end());
maxi=capacity;
current=0;
first=NULL;
lru=NULL;
}

int LRUCache::get(int key) {
 if(current>0){
     if(m.find(key)!=m.end()){
         auto j=m.find(key);
         node *ptr=first;
         while(ptr->key!=key)
         ptr=ptr->next;
         node *previous=ptr->prev;
         node *nxt=ptr->next;
         if(previous!=NULL){
             previous->next=nxt;
             if(nxt!=NULL)
             nxt->prev=previous;
             else
             lru=previous;
            ptr->prev=NULL;
            ptr->next=first;
            first->prev=ptr;
            first=ptr;
         }
         int ans=j->second;
         return ans;
     }
 }
     return -1;
}

void LRUCache::set(int key, int value) {
if(m.find(key)==m.end()){
    node *temp=new node();
    temp->key=key;
    temp->prev=NULL;
    temp->next=NULL;
    m[key]=value;
    if(current!=maxi){
        current++;
        if(current==1){
            first=temp;
            lru=first;
        }
        else{
            temp->next=first;
            first->prev=temp;
            first=temp;
        }
    }
    else{
        int t=lru->key;
        auto j=m.find(t);
        m.erase(j);
        if(lru->prev!=NULL){
            lru=lru->prev;
            lru->next=NULL;
            temp->next=first;
            first->prev=temp;
            first=temp;
        }
        else{
            lru=temp;
            first=temp;
        }
    }
  }
else{
    m[key]=value;
    node *ptr=first,*previous,*nxt;
    while(ptr->key!=key)
    ptr=ptr->next;
    previous=ptr->prev;
    nxt=ptr->next;
    if(previous!=NULL){
        previous->next=nxt;
        if(nxt!=NULL)
        nxt->prev=previous;
        else
        lru=previous;
    ptr->prev=NULL;
    ptr->next=first;
    first->prev=ptr;
    first=ptr;
    }
}
}
