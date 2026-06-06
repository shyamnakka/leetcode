class Solution {
public:
    bool ispower(int i,int n){
        double power=pow(3,i);
        if(power>n) return false;
        if(power==n) return true;
        return ispower(i+1,n);
    }
    bool isPowerOfThree(int n) {

        int i=0;
        return ispower(i,n);
        
    }
};