class Solution:
    def toLowerCase(self, s: str) -> str:
        t=''
        for i in s:
            t+=i.lower()
        return t
        