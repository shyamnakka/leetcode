class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mini=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            int finishtime=landStartTime[i]+landDuration[i];
            for(int j=0;j<waterStartTime.size();j++){
                int start=max(finishtime,waterStartTime[j]);
                int temp=start+waterDuration[j];
                mini=min(mini,temp);
            }
        }
        for(int i=0;i<waterStartTime.size();i++){
            int finishtime2=waterStartTime[i]+waterDuration[i];
            for(int j=0;j<landStartTime.size();j++){
                int start=max(finishtime2,landStartTime[j]);
                int temp=start+landDuration[j];
                mini=min(mini,temp);
            }
        }
        return mini;
        
    }
};