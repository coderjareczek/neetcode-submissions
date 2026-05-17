class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        text = ""
        opened = n
        closed = n 
        def backtracking(opened, closed, text):
            if closed == 0 and opened == 0:
                res.append(text)
                return
            if opened > 0:
                backtracking(opened - 1, closed, text + "(")            
            if closed > 0 and closed > opened:
                backtracking(opened, closed - 1, text + ")")
        backtracking(opened, closed, text)
        return res
