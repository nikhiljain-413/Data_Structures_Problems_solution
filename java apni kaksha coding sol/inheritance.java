import java.util.*;
import bank.Account;

class Shape{
    public void area(){
        System.out.println("dislaying area");
    }
}
class Triangle extends Shape{ //single level
    public void area(int b,int h){
        System.out.println(b*h/2);
    }
}
class equilateralTriangle extends Triangle{ //multiple level
    public void area(int l){
        System.out.println(1.732/4*l*l);
    }
}

class Circle extends Shape{
    public void area(float r){
        System.out.println(3.14*r*r);
    }
}

class OOPS{
    Bank.acc a1 = new Account();
    a1.name = "customer1";
}
public class inheritance {
    public static void main(String[] args) {
        equilateralTriangle t1 = new equilateralTriangle();
        t1.area(5);
        t1.area(5, 6);
        Circle c1 = new Circle();
        c1.area(5.5f);
    }
    
}
