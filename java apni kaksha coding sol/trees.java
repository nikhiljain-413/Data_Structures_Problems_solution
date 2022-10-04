import java.util.LinkedList;
import java.util.Queue;

public class trees {
    static LinkedList<Integer> ll = new LinkedList<>();
    static class node{
        int data;
        node left;
        node right;

        node(int data){
            this.data = data;
        }
    }
    static class binarytree{
        static int indx;
        binarytree(){
            this.indx = -1;
        }
        public static node builttree(int nodes[]){
            indx++;
            if(nodes[indx] == -1){
                return null;
            }

            node newnode = new node(nodes[indx]);
            newnode.left = builttree(nodes);
            newnode.right = builttree(nodes);

            return newnode;
        }
    }

    public static void preorder(node root){
        if(root == null){
            return;
        }
        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);
    }

    public static void inorder(node root){
        if(root==null){
            return;
        }
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    public static void postorder(node root){
        if(root == null){
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }

    static boolean isEmpty(Queue<node> Q){
        return Q.size() == 0;
    }

    public static void levelorder(node root){
        Queue<node> Q = new LinkedList<>();
        if(root == null){
            return;
        }

        Q.add(root);
        Q.add(null);
        int sum = 0 ;
        int level =0;
        while(!isEmpty(Q)){
            node currentnode = Q.remove();
            if(currentnode == null){
                ll.add(sum);
                sum = 0;
                level++;
                System.out.println();
                if(isEmpty(Q)){
                    break;
                }else{
                    Q.add(null);
                }
            }else{
                
                System.out.print(currentnode.data + " ");
                sum += currentnode.data;
                if(currentnode.left!=null){
                    Q.add(currentnode.left);
                }
                if(currentnode.right!=null){
                    Q.add(currentnode.right);
                }
            }
        }
        
    }

    public static int countNoOfNodes(node root){
        if(root == null){
            return 0;
        }
        
        return countNoOfNodes(root.left) + countNoOfNodes(root.right) + 1;
    }

    public static int sumOfNodes(node root){
        if(root == null){
            return 0;
        }
        return root.data + sumOfNodes(root.left) + sumOfNodes(root.right);
    }

    public static int heightoftree(node root){
        if(root == null){
            return 0;
        }
        return 1+ Math.max(heightoftree(root.left), heightoftree(root.right));
    }

    public static int diameter(node root){
        if(root == null){
            return 0;
        }
        int leftdiameter = diameter(root.left);
        int rightdiameter = diameter(root.right);
        int left_root_right_diameter = 1+ heightoftree(root.left)+ heightoftree(root.right);
        return Math.max(left_root_right_diameter, Math.max(leftdiameter, rightdiameter));
    }

    static class treeInfo{
        int ht;
        int diameter;

        treeInfo(int ht,int diameter){
            this.ht = ht;
            this.diameter = diameter;
        }
    }

    public static treeInfo diameter_2method(node root){
        if(root == null){
            return new treeInfo(0,0);
        }
        treeInfo left = diameter_2method(root.left);
        treeInfo right = diameter_2method(root.right);
        int diamete_r = 1 + left.ht + right.ht;

        int height = 1+ Math.max(left.ht, right.ht);

        treeInfo newtree = new treeInfo(height, diamete_r);
        return newtree;

    }

    public static boolean isIdentical(node tree_root , node subtree_root){
        if(tree_root == null && subtree_root==null){
            return true;
        }
        if(tree_root == null || subtree_root==null){
            return false;
        }
        if(tree_root.data == subtree_root.data){
            return isIdentical(tree_root.left, subtree_root.left) && isIdentical(tree_root.right, subtree_root.right);
        }
        return false;
    }
    
    public static boolean isSubtree(node tree_root , node subtree_root){
        if(subtree_root == null){
            return true;
        }
        if(tree_root == null){
            return false;
        }
        if(tree_root.data == subtree_root.data){
            if(isIdentical(tree_root, subtree_root)){
               return true;
            }
        }

        return isSubtree(tree_root.left, subtree_root) || isSubtree(tree_root.right, subtree_root);
    }

    public static void main(String[] args) {
        int tree_nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        int subtree_nodes[] = {3,-1,6,-1,-1};
        binarytree tree = new binarytree();
        node tree_root = tree.builttree(tree_nodes);

        binarytree subtree = new binarytree();
        node subtree_root = subtree.builttree(subtree_nodes);
        // System.out.println(root.data);
        preorder(tree_root);
        System.out.println();
        preorder(subtree_root);
        System.out.println();
        inorder(tree_root);
        System.out.println();
        postorder(tree_root);
        System.out.println();
        levelorder(tree_root);
        System.out.println(countNoOfNodes(tree_root));
        System.out.println(sumOfNodes(tree_root));
        System.out.println(heightoftree(tree_root));
        // System.out.println(diameter(tree_root));
        System.out.println(diameter_2method(tree_root).diameter);
        System.out.println(isSubtree(tree_root, subtree_root));
        for(int i=0;i<3;i++){
            System.out.println(ll.get(i));
        }
    }
}
