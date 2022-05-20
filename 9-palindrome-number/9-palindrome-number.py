class Solution(object):
    def isPalindrome(self, x):
        x=str(x)
        if x==x[::-1]:
            return 1
        else:
            return 0