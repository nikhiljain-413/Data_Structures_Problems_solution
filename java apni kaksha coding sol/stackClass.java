public class stackClass {
    static class node{
        int data;
        node next;
        node(int data){
            this.data = data;
            this.next = null;
        }
    }

    static class Stack{
        public static node head;

        public static boolean isEmpty(){
            return head == null;
        }
        public static void push(int value){
            node newnode = new node(value);
            if(head== null){
                head = newnode;
                return;
            }
            newnode.next = head;
            head = newnode;
        } 

        public static int pop(){
            if(isEmpty()){
                return -1;
            }

            int top = head.data;
            head = head.next;
            return top;
        }

        public static int peek(){
            if(isEmpty()){
                return -1;
            }
            return head.data;
        }
    }
    public static void main(String[] args) {
        Stack s1 = new Stack();
        s1.push(1);
        s1.push(2);
        s1.push(3);
        s1.push(4);
        s1.push(5);

        while(!s1.isEmpty()){
            System.out.print(s1.peek() + " ");
            s1.pop();
        }
    }
}
