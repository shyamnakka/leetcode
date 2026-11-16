class Solution {
public:
    string digitSum(string s, int k) {
        string ans=s;
        string temp;
        int i,j;
        while(ans.size()>k){
            for( i=0;i<ans.size();){
                int sum=0;
                for( j=i;j<i+k && j<ans.size();j++){
                    sum+=ans[j]-'0';
                }
                i=j;
                temp+=to_string(sum);
            }
            ans=temp;
            temp.clear();
        }
        return ans;
        
    }
};