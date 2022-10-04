import java.util.ArrayDeque;
import java.util.HashSet;
import java.util.Queue;
import java.util.Set;

public class water_jug {

    public static Boolean solution(int x, int y, int z){
        if(x+y < z){
            return false;
        }
        int[] directions = {x,-x,y,-y};
        Queue<Integer> q = new ArrayDeque<>();
        Set<Integer> visited = new HashSet<>();
        q.offer(0);
        visited.add(0);
        while(!q.isEmpty()){
            int curr = q.poll();
            if(curr == z){
                return true;
            }
            for(int direction:directions){
                int total =curr + direction;
                if(total == z){
                    return true;
                }
                if(total<0 || total>x+y){
                    continue;
                }
                if(!visited.contains(total)){
                    visited.add(total);
                    q.offer(total);
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        int capacity_j1 = 3;
        int capacity_j2 = 5;
        int measure = 4;
        System.out.println( solution(capacity_j1, capacity_j2, measure));
    }
}