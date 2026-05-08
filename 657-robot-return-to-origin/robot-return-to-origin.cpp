class Solution {
public:
    bool judgeCircle(string moves) {
        int uval=1,dval=-1,rval=1,lval=-1;
        int sum=0,rcnt=0,lcnt=0,ucnt=0,dcnt=0;
        for(char ch:moves){
            if(ch=='U'){ 
                sum+=uval;
                ucnt++;

            }
            else if(ch=='D'){
                 sum+=dval;
                 dcnt++;
            }
            else if(ch=='R') {
                sum+=rval;
                rcnt++;
            }
            else {
                sum+=lval;
                lcnt++;
                 }

        }
        if(sum==0 && rcnt==lcnt && dcnt==ucnt) return true;
        else return false;
        
    }
};