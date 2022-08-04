class Solution:
    def sortSentence(self, s: str) -> str:
        l=s.split()
        n=len(l)
        res=['*']*n
        for i in range(n):
            n1=int(l[i][-1])-1
            res[n1]=l[i][:-1]
        return ' '.join(res)