class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>set;
        
        int n=digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i==j || j==k || i==k) continue;
                    if(digits[i]==0) continue;
                    if(digits[k]%2!=0) continue;
                    int temp=digits[i]*100+digits[j]*10+digits[k];
                    set.insert(temp);
                }
            }
        }
        vector<int>ans(set.begin(),set.end());
        return ans;
    }
};