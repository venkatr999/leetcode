class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        i=0
        j=2
        n=len(s)
        count=0
        while(j<n):
            if(s[i]!=s[i+1] and s[i+1]!=s[j] and s[i]!=s[j]):
                count+=1
            i+=1
            j+=1
        return count
        