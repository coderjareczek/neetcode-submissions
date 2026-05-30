class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # Check rows
        for row in range(len(board)):
            digits = set()    
            for col in range(len(board[row])):
                val = board[row][col]
                if val == '.':
                    continue
                if val in digits:  
                    return False
                digits.add(val)

        # Check cols
        for col in range(len(board[0])):  
            digits = set()
            for row in range(len(board)):
                val = board[row][col]
                if val == '.':
                    continue
                if val in digits:
                    return False
                digits.add(val)

        sqrs = defaultdict(set)
        # Check sqrs
        for col in range(len(board[0])):
            digits = set()    
            for row in range(len(board)):
                val = board[row][col]
                if val == '.':
                    continue
                if val in sqrs[(row // 3, col // 3)]:
                    return False
                sqrs[(row // 3, col // 3)].add(val)

        return True



