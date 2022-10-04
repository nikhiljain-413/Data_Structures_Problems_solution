import java.util.ArrayList;

public class backtracking_nQueenProblemAgain {
    public static int n=4;
    public static char board[][] = new char[n][n];
    
    public static boolean isValidPosition(int row, int col, char board[][]){
        //vertical
        for(int i= 0; i<board.length;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }

        //horizontal
        for(int i= 0; i<board.length;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }

        //upperleft
        for(int i=row-1 ,j=col-1 ;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        //upper right
        for(int i=row-1 ,j=col+1 ;i>=0 && j<board.length;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        //lower left
        for(int i=row+1 ,j=col-1 ;i<board.length && j>=0;i++,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        // lower right
        for(int i=row+1 ,j=col+1 ;i<board.length && j<board.length;i++,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        return true;
    }

    public static void AddToAllBoard(char board[][], ArrayList<ArrayList<String>> allBoard){
        ArrayList<String> list = new ArrayList<>();
        for(int row = 0;row<board.length;row++){
            String str = "";
            for(int col = 0; col<board.length;col++){
                if(board[row][col] == 'Q'){
                    str+='Q';
                }
                else{
                    str+='.';
                }
            }
            list.add(str);
        }
        allBoard.add(list);
    }
    
    public static ArrayList<ArrayList<String>> allBoard = new ArrayList<>();
    public static void generateSolution(char board[][], ArrayList<ArrayList<String>> allBoard, int col){
        if(col == board.length){
            AddToAllBoard(board,allBoard);
            return;
        }
        
        for(int row=0;row<board.length;row++){
            if(isValidPosition(row,col, board)){
                board[row][col] = 'Q';
                generateSolution(board, allBoard, col+1);
                board[row][col] = '.';
            }

        }
    } 
    public static void main(String[] args) {
        generateSolution(board,allBoard,0);
        System.out.println("Total no. of ways are "+allBoard.size());
        System.out.println(allBoard);
        
    }
}
