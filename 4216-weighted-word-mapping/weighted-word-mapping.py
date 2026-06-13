class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        string = ""
        for s in words:
            wordsum= 0
            for ch in s:
                wgt=ord(ch)-ord('a')
                wordsum=wordsum+weights[wgt]

            mod=wordsum%26
            ans=chr(ord('z')-mod)
            string+=ans

        return string
