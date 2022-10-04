import java.util.*;

public class palindromic_pattern {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. of rows u want");
        int number = sc.nextInt();
        for(int i=1;i<=number;i++){
            for(int j=1;j<=number-i;j++){
                System.out.print("  ");
            }
            for(int j=i;j>=1;j--){
                System.out.print(j+" ");
            }
            for(int j=2;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
