public class stringbuilder {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Hello ");
        System.out.println(sb);
        // sb.setCharAt(0, 'p');
        // System.out.println(sb);

        //insert character at index 0
        // sb.insert(0, 's');
        // System.out.println(sb);

        //deleting charatcher from particular index
        // sb.delete(1, 2);
        // System.out.println(sb);

        //appending in the sring
        sb.append("H");
        sb.append("e");
        sb.append("l");
        sb.append("lo");
        System.out.println(sb);
        System.out.println(sb.length());
        // System.out.println(sb.charAt(1));
    }
}
