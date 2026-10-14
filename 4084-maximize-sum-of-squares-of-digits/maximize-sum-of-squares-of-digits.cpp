class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if(num*9<sum){
            return ans;
        }
        int digit;
        for(int i=0;i<num;i++){
            if(sum>9){
                digit=9;
            }
            else{
                digit=sum;
            }
            ans+=digit+'0';
            sum-=digit;
        }
        return ans;
    }
};