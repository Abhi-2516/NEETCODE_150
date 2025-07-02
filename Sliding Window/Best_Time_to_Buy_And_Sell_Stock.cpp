class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int m = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
            int dif = prices[r]-prices[l];
             m = max(m,dif);
            }
            else{
                l =r ;
            }
            r++;
           

        }
        return m;
    }
};