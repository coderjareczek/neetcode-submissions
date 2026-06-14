class Solution:
    def isValid(self, s: str) -> bool:
        closing = {"(": ")", "{": "}", "[": "]"}
        stack = []
        for c in s:
            if c in ("(", "[", "{"):
                stack.append(c)
            elif c in (")", "]", "}"):
                if not stack or closing[stack.pop()] != c:
                    return False
        
        return not stack

# O(n)
# O(n)