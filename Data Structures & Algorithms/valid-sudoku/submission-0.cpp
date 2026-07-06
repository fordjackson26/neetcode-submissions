class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i < 9; i++){
            std::map<int,int> rows;
            std::map<int, int> col;
            for (int j = 0; j < 9; j++ ){
                if (board[i][j] == '.') continue;
                rows[board[i][j]]++;
                if (rows[board[i][j]] > 1){
                    return false;
                }
            }
            for (int j = 0; j < 9; j++ ){
                if (board[j][i] == '.') continue;
                col[board[j][i]]++;
                if (col[board[j][i]] > 1){
                    return false;
                }
            }
        }

        for (int square = 0; square < 9; square++) {
            std::map<int, int> sq;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    sq[board[row][col]]++;
                    if(sq[board[row][col]] > 1) return false;
                }
            }
}
return true;
    }
};
