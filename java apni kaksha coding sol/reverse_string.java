import java.util.Scanner;

public class reverse_string {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the sentence to be reversed");
        String str = sc.nextLine();
        StringBuilder sb = new StringBuilder(str);
        for(int i=0;i<sb.length()/2;i++){
            int first_index = i;
            int second_index = sb.length() - 1-i;

            char first_char = sb.charAt(first_index);
            char second_char = sb.charAt(second_index);

            sb.setCharAt(first_index, second_char);
            sb.setCharAt(second_index, first_char);
        }

        System.out.println(sb);
    }
}
