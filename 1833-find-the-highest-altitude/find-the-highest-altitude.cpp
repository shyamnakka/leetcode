class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
            if(maxi<(prev+gain[i])){
                maxi=prev+gain[i];
            }
            prev=prev+gain[i];
        }
        return maxi;

        
    }
};