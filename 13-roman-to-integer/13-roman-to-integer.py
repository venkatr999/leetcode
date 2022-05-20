class Solution:
    def romanToInt(self, s: str) -> int:
        d={'M':1000,'D':500,'C':100,'L':50,'X':10,'V':5,'I':1,'XL':40,
           'IV':4,'IX':9,'XC':90,'CD':400,'CM':900}
        sum1=0
        i=0
        while(i<len(s)):
            if s[i:i+2] in d:
                sum1+=d[s[i:i+2]]
                i+=2
            elif s[i] in d:
                sum1+=d[s[i]]
                i+=1
        return sum1