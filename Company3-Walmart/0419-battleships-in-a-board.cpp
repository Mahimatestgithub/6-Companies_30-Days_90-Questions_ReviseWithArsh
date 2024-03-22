class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
if (n==0)
return 0;
int m = board[0].size();
if (m==0)
return 0;

int i, j, left, top;
int total =0;
for(i = 0; i < n;i++){
for(j = 0; j < m;j++){
if (board[i][j] == 'X' && (j == 0 || board[i][j - 1] == '.') && (i == 0 || board[i - 1][j] == '.')) {
                    total++;
   }
}
   }
return total;
}
};