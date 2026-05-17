class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # Check for duplicates in rows - let's use a set
        for i in range(len(board)):
            rowsSet = set()
            for j in range(len(board[i])):
                if board[i][j] != '.' and board[i][j] in rowsSet:
                    return False
                rowsSet.add(board[i][j])

        # Check for duplicates in columns 
        for i in range(len(board)):
            colsSet = set()
            for j in range(len(board[i])):
                if board[j][i] != '.' and board[j][i] in colsSet:
                    return False
                colsSet.add(board[j][i])
        

        # Check for duplicates in squares  
        for i in range(len(board)):
            sqSet = set()
            for j in range(len(board[i])):
                if board[j // 3 + 3 * (i // 3)][j % 3 + 3 * (i % 3)] != '.' and board[j // 3 + 3 * (i // 3)][j % 3 + 3 * (i % 3)] in sqSet:
                    return False
                sqSet.add(board[j // 3 + 3 * (i // 3)][j % 3 + 3 * (i % 3)])


        return True       