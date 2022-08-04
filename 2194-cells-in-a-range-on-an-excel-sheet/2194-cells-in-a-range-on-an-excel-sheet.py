class Solution:
    def cellsInRange(self, s: str) -> List[str]:
        a1,a2=s[0],s[3]
        n1,n2=int(s[1]),int(s[4])
        l=list()
        for i in range(ord(a1),ord(a2)+1):
            for j in range(n1,n2+1):
                l.append(chr(i)+str(j))
        return l
        