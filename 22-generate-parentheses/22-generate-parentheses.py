class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        stack=[]
        res=[]
        def generate(closedp,openp):
            if closedp==openp==n:
                res.append("".join(stack))
                return
            if openp<n:
                stack.append("(")
                generate(closedp,openp+1)
                stack.pop()
            if closedp<openp:
                stack.append(")")
                generate(closedp+1,openp)
                stack.pop()           
        
        generate(0,0)
        return res
        