class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int move=0,blank=0;
        for(char it:moves){
            if(it=='L') move-=1;
            else if(it=='R') move+=1;
            else blank++;
        }
        return blank+abs(move);
        
    }
};