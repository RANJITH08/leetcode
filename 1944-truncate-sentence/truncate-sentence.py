class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        index=0
        space=0
        for c in s:
            if(c==' '): space=space+1
            if(space==k): break
            index=index+1
        return s[0:index]
        