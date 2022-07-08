class Solution:
    def reverse(self, x: int) -> int:
        def revnum(num):
            sum=0
            while(num!=0):
                r=num%10
                sum=sum*10+r
                num=num//10
            return sum
                
        if(x<=9 and x>=-9):
            return x
        else:
            if(x>0):
                temp=revnum(x)
                
            else:
                x=abs(x)
                temp=revnum(x)
                temp*=-1
        if temp>= -2147483648 and temp< 2147483647:
            return temp
        else:
            return 0
        