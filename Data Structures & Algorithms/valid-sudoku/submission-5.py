class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        inRow = set()
        inCol = set()
        inSquare = set()
        
        for i in range(len(board)):
            inRow = set()
            for j in range(len(board[i])):
                if board[i][j] in inRow and board[i][j] != '.':
                    return False
                inRow.add(board[i][j])

        for j in range(len(board)):
            inCol = set()
            for i in range(len(board[j])):
                if board[i][j] in inCol and board[i][j] != '.':
                    return False
                inCol.add(board[i][j])

        for i in range(len(board)):
            inSquare = set()
            for j in range(len(board[i])):
                c = j // 3 + 3 * (i // 3)
                r = j % 3 + 3 * (i % 3)
                if board[c][r] in inSquare and board[c][r] != '.':
                    return False
                inSquare.add(board[c][r])
        return True