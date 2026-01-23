class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>answer(n-k+1);
        map<int,int>mpp;
        int size=n-k+1;
        for(int i=0;i<size;i++){
            int windowsize=i+k-1;
            for(int j=i;j<=windowsize;j++){
                mpp[nums[j]]++;
            }
            vector<pair<int,int>>v;
            for(auto it:mpp){
                v.push_back({it.first,it.second});
            }
            sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){
                if(a.second!=b.second) return a.second>b.second;
                return a.first>b.first;
            });
            int sum=0;
            for(int k=0;k<x && k<v.size();k++){
                sum+=v[k].first*v[k].second;
                answer[i]=sum;
            }
            mpp.clear();
        }
        return answer;
        
    }
};