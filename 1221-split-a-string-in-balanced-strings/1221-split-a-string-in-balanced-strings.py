class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count=0
        stack=[]
        for i in s:
            if len(stack)==0:
                stack.append(i)
                count+=1
            elif(stack[-1]!=i):
                stack.pop()
            else:
                stack.append(i)
        return count