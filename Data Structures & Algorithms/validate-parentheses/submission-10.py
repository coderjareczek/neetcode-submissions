class Solution:
    def isValid(self, s: str) -> bool:
        opening = {"(": ")", "{": "}", "[": "]"}
        stack = []
        for c in s:
            if c in opening:
                stack.append(c)
            else:
                if not stack or opening[stack.pop()] != c:
                    return False
        
        return not stack

# O(n)
# O(n)
