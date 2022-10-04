import java.util.Scanner;

public class strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // String fullName = sc.nextLine();
        // for(int i=0;i<fullName.length();i++){
        //     System.out.println(fullName.charAt(i));
        // }

        //concatenation
        // String firstName = "Nikhil";
        // String LastName = "Jain";
        // String fullName = firstName + " " + LastName;
        // System.out.println(fullName);

        //slising
        // String newStr = "my name is nikhil jain";
        // System.out.println(newStr.substring(11, 17));
        // System.out.println(newStr.substring(11));

        //comparing two strings
        String str1 = "nikhil";
        String str2 = "nikhil";
        String str3 = "Nikhil";
        // if(str1.compareTo(str2) == 0){
        //     System.out.println("string are equal");
        // }else if(str1.compareTo(str2)>0){
        //     System.out.println("not in dictionary order");
        // }else{
        //     System.out.println("in dictionary order");
        // }

        if(str1.compareToIgnoreCase(str3) == 0){
            System.out.println("string are equal");
        }else{
            System.out.println("strings are not equal");
        }
    }
}
