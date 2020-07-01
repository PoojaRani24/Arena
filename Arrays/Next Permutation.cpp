class Solution {
public:                                              //6
    int findindex(vector<int>& a,int start,int end,int target){
        int small=a[start]; //9
        int val;
        for(int i=start;i<=end;i++){
            if(a[i]>target && a[i]<=small){
                small=a[i];
            val=i;}
        }
        cout<<val<<endl;
        return val;
    }
    void nextPermutation(vector<int>& a) {// 5 3 4 9 7 6
        int index=-1;;
        for(int i=a.size()-1;i>0;i--){
            if(a[i]>a[i-1]){              //      4 9 7 6
                index=i-1;                //index=2
                cout<<index<<endl;
                break;
            }
        }
        if(index==-1)//decreasingly sorted 7 9 5 4
            reverse(a.begin(),a.end());//                     4 5 6 7
        else{
           int findex=findindex(a,index+1,a.size()-1,a[index]);// findex=5
             a[index]=a[index]+a[findex];// a=2 b=3   a=2+3
             a[findex]=a[index]-a[findex];//b=2+3-3=2
            a[index]=a[index]-a[findex];//a=2+3-2=3      5 3 6 9 7 4
            reverse(a.begin()+index+1,a.end());
        }
    }
};
