class Solution:
    def minimumSum(self, num: int) -> int:
        l=[]
        while(num>0):
            l.append(num%10)
            num=num//10
        l.sort()
        a=l[0]*10+l[-1]
        b=l[1]*10+l[-2]
        return a+b
        