import java.util.Scanner;
public class hollow_rhombus {
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. of rows u want");
        int number = sc.nextInt();
        for(int i=1;i<=number;i++){
            for(int j=1;j<=number-i;j++){
                System.out.print("  ");
            }
            for(int j=1;j<=number;j++){
                if(i==1 || i== number || j==1 || j==5)
                    System.out.print("* ");
                else{
                    System.out.print("  ");
                }
            }   
            System.out.println();
        }
    }
}
