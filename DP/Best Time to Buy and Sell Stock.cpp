class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int minprice=prices[0],ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice=prices[i];
                continue;
            }
            else{
                if(prices[i]-minprice>ans)
                    ans=prices[i]-minprice;
            }
        }
        return ans;
    }
};
