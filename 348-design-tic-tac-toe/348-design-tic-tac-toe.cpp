class TicTacToe {
public:
    int *r, *c, d1, d2, n;
    TicTacToe(int n) {
        this->n = n;
        r = new int[n], c = new int[n], d1 = d2 = 0;
        fill(r,r+n,0);
        fill(c,c+n,0);
    }
    
    int move(int row, int col, int player) {
        if(player == 1){
            r[row]++, c[col]++;
            d1 += (row == col);
            d2 += (row+col == n-1);
            
            if(r[row] == n or c[col] == n or d1 == n or d2 == n) return 1;
        }
        
        if(player == 2){
            r[row]--, c[col]--;
            d1 -= (row == col);
            d2 -= (row+col == n-1);
            
            if(r[row] == -n or c[col] == -n or d1 == -n or d2 == -n) return 2;
        }
        return 0;
    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */