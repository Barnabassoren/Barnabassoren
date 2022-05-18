public class BinaryTrees {
  static  class Node
    {
        int data;
        Node left;
        Node right;
        Node(int data)
        {
            this.data = data;
            left = right = null;
        }
    }
      static class BinaryTree 
    {
        // Root of Binary Tree
        Node root;
        // constructors
        BinaryTree(int data)
        {
            root = new Node(data);
        }

        BinaryTree()
        {
            root = null;
        }

    }
   private static void inOrder(Node root) 
    {
        if(root == null) return;

        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);
    }
   private static void printPostorder(Node root)
    {
        if(root == null) return;
        
        printPostorder(root.left);
        printPostorder(root.right);
        System.out.print(root.data + " ");

    }
    private static void preOrder(Node root)
    {
        if(root == null)
        return;

       System.out.print(root.data + " ");
       preOrder(root.left);
       preOrder(root.right);


    }
//    public static void printPostorder()
//     {
//         printPostorder(root);
//         return;
//     }
    public static void main(String[] args)
    { 
      BinaryTree tree = new BinaryTree();
      tree.root = new Node(1);
      tree.root.left = new Node(2);
      tree.root.right = new Node(3);
      tree.root.left.left = new Node(4);
      printPostorder(tree.root);
      System.out.println();
       inOrder(tree.root);
       System.out.println();
       preOrder(tree.root);      
    }
}
