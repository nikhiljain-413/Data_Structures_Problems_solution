import java.util.*;

public class stack_using_arraylist {

    static class stack{
        static ArrayList<Integer> list =  new ArrayList<>();

        public static boolean isEmpty(){
           return list.size() == 0;
        }

        public static void push(int data){
            list.add(data);
        }

        public static int pop(){
            if(isEmpty()){
                System.out.println("list is empty");
                return -1;
            }
            int top = list.get(list.size()-1);
            list.remove(list.size()-1);
            return top;
        }

        public static int peek(){
            if(isEmpty()){
                System.out.println("list is empty");
                return -1;
            }
            int top = list.get(list.size()-1);
            return top;
        }
    }
    public static void main(String[] args) {
        stack s1 = new stack();
        s1.push(1);
        s1.push(2);
        s1.push(3);
        s1.push(4);
        // s1.push(5);

        while(!s1.isEmpty()){
            System.out.print(s1.peek() + " ");
            s1.pop();
        }
    }
}
