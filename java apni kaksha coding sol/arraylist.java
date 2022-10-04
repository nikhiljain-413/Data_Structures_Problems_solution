import java.util.ArrayList;
import java.util.Collections;

public class arraylist{
    public static void main(String[] args) {

        // arraylist can't be implemented using primitive data types.
        // they are implemented using objects of suitable classes
        // Integer | String | Boolean

        ArrayList<Integer> list = new ArrayList<>();

        //addaing an elemet in a list
        list.add(0);
        list.add(2);
        list.add(3);

        //Fetching an element from the list
        int element = list.get(2);
        System.out.println(element);

        // addaing am element at a particular location
        list.add(1,1);              //list.add(index,value)
        System.out.println(list);

        //updating element
        list.set(0, 5);              //list.set(index , value)
        System.out.println(list);

        System.out.println(list.size());

        for(int i=0;i<list.size();i++){
            System.out.print(list.get(i) + " ");
        }
        System.out.println();

        
        // Collection.sort(list);
        Collections.sort(list);
        System.out.println(list);

    }
}