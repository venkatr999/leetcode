class Solution:
    def toLowerCase(self, s: str) -> str:
        t=''
        for i in s:
            if i.isupper():
                t+=i.lower()
            else:
                t+=i
        return t
        