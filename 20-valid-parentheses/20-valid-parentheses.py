class Solution(object):
    def isValid(self, s):
        stack=[]
        for i in s:
            if len(stack)==0:
                stack.append(i)
            elif(stack[-1]=='(' and i==')' ):
                stack.pop()
            elif (stack[-1]=='[' and i==']' ):
                stack.pop()
            elif (stack[-1]=='{' and i=='}'):
                stack.pop()
            else:
                stack.append(i)
        if len(stack)==0:
            return 1
        else:
            return 0
        