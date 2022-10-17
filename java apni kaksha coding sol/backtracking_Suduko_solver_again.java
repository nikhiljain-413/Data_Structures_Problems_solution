public class backtracking_Suduko_solver_again {
    //we have taken the chessboard manually or we can take the input from user also
    public static char board[][] = {{'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}};

    public static void printBoard(char board[][]){
        for(int row=0;row<board.length;row++){
            for(int col=0;col<board.length;col++){
                System.out.print(board[row][col]+" ");
            }
            System.out.println();
        }
    }

    public static boolean isSafe(char board[][],int row, int col, int value){
        //horizontal and verticl check
        for(int i=0;i<board.length;i++){
            if(board[row][i] == (char)(value + '0')){
                return false;
            }
            if(board[i][col] == (char)(value + '0')){
                return false;
            }
        }

        //grid of 3*3 matrix
        int start_row_index = (row/3)*3;
        int start_col_index = (col/3)*3;
        for(int i=start_row_index;i<start_row_index+3;i++){
            for(int j=start_col_index;j<start_col_index+3;j++){
                if(board[i][j] == (char)(value + '0')){
                    return false;
                }
            }
        }
        return true;
    }

    public static boolean SudukoSolver(char board[][],int row, int col){
        if(row == board.length){
            return true;
        }
        int nrow,ncol;
        //now which index to go is calculate here
        if(col != board.length-1){
            nrow = row;
            ncol = col+1;
        }
        else{
            nrow= row+1;
            ncol = 0;
        }

        //if there is some number already present then we only have to check it else if have to loop from 1 to 9 and fit the number.
        if(board[row][col] !='.'){
            if(SudukoSolver(board, nrow, ncol)){
                return true;
            }
        }
        else{
            for(int value=1; value<=9; value++){
                if(isSafe(board, row, col, value)){
                    board[row][col] =(char)(value + '0');
                    if(SudukoSolver(board, nrow, ncol)){
                        return true;
                    }
                    else{
                        board[row][col] = '.';
                    }
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        // System.out.println("backtracking_Suduko_solver_again");
        // printBoard(board);
        System.out.println();
        SudukoSolver(board, 0, 0);
        printBoard(board);
    }
}
