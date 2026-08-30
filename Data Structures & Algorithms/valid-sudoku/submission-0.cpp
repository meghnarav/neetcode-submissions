class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool subgrids[9][9] = {false};

        for(int r=0; r<9; ++r){
            for(int c=0; c<9; ++c){
                int num = board[r][c];

                if(num=='.') continue;
                int idx = num - '1';
                int subgridIdx = (r/3)*3 + (c/3);
                if (rows[r][idx] || cols[c][idx] || subgrids[subgridIdx][idx]) {
                    return false;
                }
                rows[r][idx] = true;
                cols[c][idx] = true;
                subgrids[subgridIdx][idx] = true;
            }
        }
        return true;
    }
};
