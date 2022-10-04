public class queue {
    static class Queue{
        static int arr[];
        static int rear = -1;
        static int front = -1;

        Queue(int size){
            arr = new int[size];
        }

        public static boolean isEmpty(){
            return rear == -1;
        }

        public static void add(int data){
            if(isEmpty()){
                rear++;front++;
                arr[0]=data;
                return;
            }
            rear++;
            arr[rear] = data;
    
        }
    
        public static int remove(){
            if(isEmpty()){
                System.out.println("Empty Queue");
                return -1;
            }
            int front_elm = arr[0];
            for(int i=0;i<rear;i++){
                arr[i] = arr[i+1];
            }
            rear--;
            return front_elm;
        }
    
        public static int peek(){
            if(isEmpty()){
                System.out.println("Empty Queue");
                return -1;
            }
            return arr[0];
        }
    } 


    public static void main(String[] args) {
        Queue q= new Queue(5);
        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);

        for(int i=0;i<=q.rear;i++){
            System.out.print(q.arr[i] + " ");
        }
    }
}
