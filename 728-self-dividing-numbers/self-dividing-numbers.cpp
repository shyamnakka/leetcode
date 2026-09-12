class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++){
            int temp=i;
            bool self=true;
            while(temp>0){
                int digit=temp%10;
                if(digit==0){
                    self=false;
                    break;
                }
                if(i%digit!=0){
                    self=false;
                    break;
                }
                temp=temp/10;
            }
            if(self) result.push_back(i);
        }
        return result;
        
    }
};