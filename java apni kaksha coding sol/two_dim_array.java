import java.util.Scanner;

public class two_dim_array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. of rows u want");
        int rows = sc.nextInt();
        System.out.println("enter no. of columns u want");
        int columns = sc.nextInt();
        int arr[][] = new int[rows][columns];

        System.out.println("enter elements of array");
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                int num = sc.nextInt();
                arr[i][j] = num;
            }
        }

        System.out.println("\nPrinting the array");
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
