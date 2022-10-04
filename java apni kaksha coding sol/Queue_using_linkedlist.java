public class Queue_using_linkedlist {

    static node front = null;
    static node rear = null;
    static class node{
        int data;
        node next;

        node(int data){
            this.data = data;
        }
    }

    static class Queue{

        public static boolean isEmpty(){
            return front == null && rear == null;
        }

        public static void add(int data){
            node newnode = new node(data);
            if(front == null){
                front = rear = newnode;
            }
            rear.next = newnode;
            rear = newnode;

        }

        public static int remove(){
            if(isEmpty()){
                System.out.println("No element present");
                return -1;
            }
            int front_elm = front.data;
            if(front == rear){
                front = rear = null;
                return front_elm;
            }
            front = front.next;
            return front_elm;
        }

        public static int peek(){
            if(isEmpty()){
                System.out.println("No element present");
                return -1;
            }
            return front.data;
        }
    }
    public static void main(String[] args) {
        Queue q = new Queue();
        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);

        node start;
        for(start = front; start!=rear;start = start.next){
            System.out.print(start.data + " ");
        }
        System.out.println(start.data);

        while(!q.isEmpty()){
            System.out.print(q.peek() + " ");
            q.remove();
        }
        
    }
}
