class Solution:
    def hammingWeight(self, n: int) -> int:
        n=bin(n)
        s=n[2:]
        return s.count('1')
        