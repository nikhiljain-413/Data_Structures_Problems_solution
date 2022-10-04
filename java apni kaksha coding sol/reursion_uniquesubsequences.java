import java.util.HashSet;

public class reursion_uniquesubsequences {
    public static void uniqueSubSequence(String str, int index,String newString, HashSet<String> set){
        if(index == str.length()){
            if(set.contains(newString)){
                return;
            }else{
                System.out.println(newString);
                set.add(newString);
                return;
            }
        }
        
        char currentChar = str.charAt(index);
        //to add in newString
        uniqueSubSequence(str, index+1, newString+currentChar, set);
        //not to add in newString
        uniqueSubSequence(str, index+1, newString, set);
    } 
    public static void main(String[] args) {
        HashSet <String> set = new HashSet<>();
        String str = "abc";
        uniqueSubSequence(str, 0, "", set);
    }

}
