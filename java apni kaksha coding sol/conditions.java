import java.util.*;
public class conditions {
    public static void main(String []args){
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the age of student");
    int age = sc.nextInt();
    if(age>=18){
        System.out.println("you are an adut");
    }
    else{
        System.out.println("you are a child");
    }
    }
}
