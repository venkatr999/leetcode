class Solution:
    def isHappy(self, n: int) -> bool:
        for i in range(100):
            s=0
            t=n
            while(t>0):
                r=t%10
                s+=r*r
                t=t//10
            if(s==1):
                return True
            n=s 
        return False
        