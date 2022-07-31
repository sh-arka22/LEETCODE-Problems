class Solution {
    public class pair{
        int r=0;
        int c=0;
        pair(int r,int c){
            this.r=r;
            this.c=c;
        }
    }
    public void solveSudoku(char[][] board) {
        List<pair> empty =new ArrayList<>();
        for(int i=0;i<81;i++){
            int r=i/9;
            int c=i%9;
            
            if(board[r][c]=='.'){
               empty.add(new pair(r,c));     
            }
            
        }
        solveSudoku(board,0,empty);
    }
    
    public static boolean solveSudoku(char[][] board,int idx,List<pair>empty){
        
       if(idx==empty.size()){
           return true;
       }
        pair p = empty.get(idx);
        int r=p.r;
        int c=p.c;
        
        
        for(int num=1;num<=9;num++){
            
            if(is_valid(board,num,r,c)){
                board[r][c]=(char)(num+'0');
                boolean is_next_num=solveSudoku(board,idx+1,empty);
                if(is_next_num==false){
                    board[r][c]='.';
                }
                else{
                    return true;
                }
            }
            
        }
        return false;   
        
    }
    
    public static boolean is_valid(char[][]board,int num,int r,int c){
        
       // row
        for (int i = 0; i < 9; i++)
            if (board[r][i] == (char)num+'0')
                return false;

        // col
        for (int i = 0; i < 9; i++)
            if (board[i][c] == (char) num + '0')
                return false;

        // mat
        r = (r / 3) * 3;
        c = (c / 3) * 3;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[r + i][c + j] == (char) num + '0')
                    return false;
            }
        }

        return true;
    }
        
}