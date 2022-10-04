import java.util.*;
public class constellation {
    public static Boolean check(String[][] mat1,String[][]mat2){
        for(int row = 0;row<3;row++){
            for(int col=0;col<3;col++){
                if(!mat1[row][col].equals(mat2[row][col])){
                    return false;
                }
            }
        }
        return true;
    }

    public static String find_charr(String [][]image){
        String [][]A = {{".","*","."},{"*","*","*"},{"*",".","*"}};
        String [][]E = {{"*","*","*"},{"*","*","*"},{"*","*","*"}};
        String [][]I = {{"*","*","*"},{".","*","."},{"*","*","*"}};
        String [][]O = {{"*","*","*"},{"*",".","*"},{"*","*","*"}};
        String [][]U = {{"*",".","*"},{"*",".","*"},{"*","*","*"}};
         
        if(check(image,A))
            return "A";

        else if(check(image,E))
            return "E";

        else if(check(image,I))
            return "I";

        else if(check(image,O))
            return "O";

        else if(check(image,U))
            return "U";
        else{
            return "";
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String grid[][] = new String[3][N];
        String image[][] = new String[3][3];
        for(int row = 0;row < 3; row++){
            int col=0;
            while(col<N){
            String s = sc.next();
                if(s != " "){
                    grid[row][col] = s;
                    col++;
                }
            }
        }

        
        for(int col=0 ;col<N; col++){
            if(grid[0][col].equals("#")){
                System.out.print("#");
            }
            else if(grid[0][col].equals(".") && grid[1][col].equals(".") && grid[2][col].equals(".")){
                continue;
            }
            else{
               
                for(int cur_row = 0; cur_row<3 ; cur_row++){
                    for(int cur_col = 0;cur_col<3;cur_col++){
                        image[cur_row][cur_col] = grid[cur_row][cur_col + col];
                    }
                }
                 
                String get_char = find_charr(image);
                System.out.print(get_char);
                col+=2;
            }
            
        }
        
    }
}
