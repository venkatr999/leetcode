class Solution:
    def minOperations(self, a: List[int]) -> int:
        count=0
        n=len(a)
        for i in range(1,n):
            if(a[i]<=a[i-1]):
                t=a[i]
                a[i]=a[i-1]+1
                count+=abs(t-a[i])
        return count
        