class Solution:
    def minTimeToType(self, word: str) -> int:
        n=len(word)
        p='a'
        time=0
        for i in word:
            t=abs(ord(p)-ord(i))
            time+=min(t,abs(26-t))+1
            p=i
        return time
            
            
        