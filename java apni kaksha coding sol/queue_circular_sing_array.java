public class queue_circular_sing_array {
    static class circularQueue{
        static int size;
        static int arr[];
        static int rear =-1;
        static int front =-1;

        circularQueue(int size){
            arr = new int[size];
            this.size = size;
        }

        public static boolean isEmpty(){

            return (front == rear && front ==-1);
        }

        public static void add(int value){
            if(isEmpty()){
                
                rear= (rear+1)%size;
                front = (front+1)%size;
                arr[front] = value;
                return;
            }
            rear = (rear+1)%size;
            arr[rear]= value;

        }

        public static int remove(){
            if(isEmpty()){
                System.out.println("Queue is empty");
                return -1;
            }
            int front_elm;
            if(rear == front){
                front_elm = arr[front];
                rear = -1;
                front =-1;
            }else{
                front_elm = arr[front];
                front = (front+1)%size;
            }
            return front_elm;
        }

        public static int peek(){
            if(isEmpty()){
                System.out.println("Queue is empty");
                return -1;
            }
            return arr[front];
        }

    }
    public static void main(String[] args) {
        circularQueue q = new circularQueue(5);
        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);
        q.add(5);
        q.remove();
        q.remove();
        q.add(6);
        q.add(7);

        for(int i=0;i<5;i++){
            System.out.print(q.arr[i] + " ");
        }
    }
}
