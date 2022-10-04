import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Queue;
import java.util.Set;

public class waterJugProblem{
    public static Boolean solution(int x,int y,int z){
        int [] directions = {x,-x,y,-y};
        if(x+y<z){
            return false;
        }
        Queue<Integer> q = new ArrayDeque<>();
        Set<Integer> visited = new HashSet<>();
        visited.add(0);
        q.offer(0);
        while(!q.isEmpty()){
            int curr = q.poll();
            if(curr == z){
                return true;
            }
            for(int direction: directions ){
                int total = curr + direction;
                if(total<0 || total>=x+y){
                    continue;
                }
                if(total == z){
                    return true;
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
        int x=3,y=5,z=4;
        System.out.println(solution(x,y,z)); 
    }
}