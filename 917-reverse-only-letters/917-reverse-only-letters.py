class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        s=list(s)
        t=""
        for i in s:
            if(i.isalpha()):
                t+=i
        t=t[::-1]
        k=0
        for j in range(len(s)):
            if(s[j].isalpha()):
                s[j]=t[k]
                k+=1
        return ''.join(s)
                              