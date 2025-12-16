class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        long long chain=1,total=1;
        for(int i=1;i<n;i++){
            if(prices[i-1]-prices[i]==1){
                chain=chain+1;
            }
            else{
                chain=1;
            }
            total=total+chain;
        }
        return total;
        
    }
};