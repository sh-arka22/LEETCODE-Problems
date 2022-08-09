class TicTacToe {
public:
    int *r ,*c ,d1 ,d2, n;
    TicTacToe(int n) {
        r = new int[n];
        c = new int[n];
        for(int i=0;i<n;i++){
            r[i] = c[i] = 0;
        }
        d1 = d2 = 0;
        this->n = n;
    }
    
    int move(int row, int col, int player) {
        if(player == 1){
            r[row]++;
            c[col]++;
            if(row == col) d1++;
            if(row+col == n-1) d2++;
            if(r[row] == n or c[col] == n or d1 == n or d2 == n) return 1;
        }
        
        if(player == 2){
            r[row]--;
            c[col]--;
            if(row == col) d1--;
            if(row+col == n-1) d2--;
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