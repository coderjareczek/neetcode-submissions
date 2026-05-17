class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> cols(9);
        unordered_map<int, unordered_set<char>> squares;
        for (int i = 0; i < board.size(); i++) {
            unordered_set<char> rows;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == '.') continue;
                if (rows.count(board[i][j]) > 0) return false;
                rows.insert(board[i][j]);
                if (cols[j].count(board[i][j])) return false;
                cols[j].insert(board[i][j]);
                //check squeres
                if (squares[i/3 + j/3 * 10].count(board[i][j])) return false;
                squares[i/3 + j/3 * 10].insert(board[i][j]);
            }
        }
        return true;
    }
};
