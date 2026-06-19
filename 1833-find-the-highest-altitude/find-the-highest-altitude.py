class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        prev=0
        maxi=0
        for i in range(len(gain)) :
            if maxi<prev+gain[i]:
                maxi=prev+gain[i]
            prev=prev+gain[i]
        return maxi
        