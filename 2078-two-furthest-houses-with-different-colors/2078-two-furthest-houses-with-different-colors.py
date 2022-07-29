class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        m=0
        for i in range(len(colors)):
            for j in range(i,len(colors)):
                if colors[i]!=colors[j]:
                    m=max(m,j-i)
        return m
        