class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        for(int target=n;target>=1;target--){
            int pos=0;
            for(int i=0;i<n;i++){
                if(arr[i]==target){
                    pos=i;
                    break;
                }
            }
            if(pos==target-1) continue;
            if(pos!=0){
                reverse(arr.begin(),arr.begin()+pos+1);
                ans.push_back(pos+1);
            }
            reverse(arr.begin(),arr.begin()+target);
            ans.push_back(target);
        }
        return ans;

        
    }
};