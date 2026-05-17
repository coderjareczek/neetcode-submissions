class Solution:
    def isValid(self, s: str) -> bool:
        l = 0
        r = len(s) - 1
        dictOfBrackets = {'(' : ')', '[' : ']', '{' : '}'}
        stack = []

        for i in range(len(s)):
            if len(stack) != 0:
                if dictOfBrackets.get(stack[-1], 0) == s[i]:
                    stack.pop()
                else:
                    stack.append(s[i])
            else:
                stack.append(s[i])

        return len(stack) == 0

        # Time complexity: O(n)
        # Space complexity: O(n)
        