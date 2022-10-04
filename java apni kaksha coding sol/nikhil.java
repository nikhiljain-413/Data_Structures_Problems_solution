class node{
    int data;
    node left,right;
    node(int value){
        this.data = value;
        this.left = null;
        this.right = null;
    }
}

public class nikhil{

    public static void main(String []args){
        // node head = new node(10);
        node head = null;

        for(int i=1;i<11;i++){
            node newnode = new node(i);
            newnode.right = head;
            head = newnode;
        }

        node temp = head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp = temp.right;
        }
    }

    
}