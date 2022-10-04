class Student{
    String name;
    int age;
    public void printInfo(String name) {
        System.out.println(name);
    }
    public void printInfo(int age) {
        System.out.println(age);
    }
    public void printInfo(String name,int age) {
        System.out.println(name + " " + age);
    }
    Student(String name, int age){
        this.name = name;
        this.age = age;
    }
    Student(){
        System.out.println("Hey i am Constructor");
    }
}

public class classes {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "nikhil";
        s1.age = 21;
        s1.printInfo(s1.name);
        s1.printInfo(s1.age);
        s1.printInfo(s1.name, s1.age);

        Student s2 = new Student("priya",23);
        s2.printInfo(s2.name, s2.age);
    }
}
