class Solution:
    def reverseBits(self, n: int) -> int:
        n=bin(n)
        n=n[2:]
        l=len(n)
        l=32-l
        s=""
        for i in range(l):
            s+='0'
        s+=n
        s=s[::-1]
        return int(s,2)
        
        