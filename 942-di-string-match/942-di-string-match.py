class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        l,r = 0,len(s)
        perm = []
        for char in s:
            if char =='I':
                perm.append(l)
                l+=1
            else:
                perm.append(r)
                r-=1
        return perm + [l]