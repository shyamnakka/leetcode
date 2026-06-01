class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans=0;
        int n=cost.size();
        sort(cost.begin(),cost.end(),greater<int>());
        for(int i=0;i<n;i+=3){
            for(int j=i;j<i+2 && j<n;j++){
                ans+=cost[j];
            } 
        }
        return ans;  
    }
};