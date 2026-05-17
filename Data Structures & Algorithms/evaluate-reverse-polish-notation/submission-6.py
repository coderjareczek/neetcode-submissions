class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for c in tokens:
            if c == "+":
                a = stack[-2] + stack[-1]
                stack.pop()
                stack.pop()
                stack.append(a)
            elif c == "-":
                a = stack[-2] - stack[-1]
                stack.pop()
                stack.pop()
                stack.append(a)
            elif c == "*":
                a = stack[-2] * stack[-1]
                stack.pop()
                stack.pop()
                stack.append(a)
            elif c == "/":
                a = int(stack[-2] / stack[-1])
                stack.pop()
                stack.pop()
                stack.append(a)
            else:
                stack.append(int(c))


        return stack[-1]
