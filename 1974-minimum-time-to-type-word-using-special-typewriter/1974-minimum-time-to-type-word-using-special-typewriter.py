class Solution:
    def minTimeToType(self, word: str) -> int:
        n=len(word)
        p='a'
        time=0
        for i in word:
            t=abs(ord(p)-abs(ord(i)))
            t=min(t,abs(26-t))
            p=i
            time+=(t+1)
        return time
            
            
        