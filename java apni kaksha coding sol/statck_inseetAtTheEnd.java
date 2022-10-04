import java.util.Stack;

public class statck_inseetAtTheEnd {

    public static boolean isEmpty(Stack<Integer> s){
        return s.size() == 0;
    }

    public static void insert_at_bottom(int data, Stack<Integer> s){
        if(isEmpty(s)){
            s.push(data);
            return;
        }
        int top = s.pop();
        insert_at_bottom(data,s);
        s.push(top);
    }
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        insert_at_bottom(4, s);

        while(!isEmpty(s)){
            System.out.print(s.peek() + " ");
            s.pop();
        }


    }
}
