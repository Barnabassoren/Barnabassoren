public class BinaryTreesYT
{
  static class Node 
   {
       int data;
       Node left,right;
       Node(int data)
       {
           this.data = data;
           left = right = null;
       }
   }
    static class BinaryTree
    {
        Node root;
        BinaryTree(int data)
        {
            root = new Node(data);
        }
        BinaryTree()
        {
            root = null;
        }
    }
    private static void printInOrder(Node root)
    {
        if(root == null)
        return;

        printInOrder(root.left);
        System.out.print(root.data + " ");
        printInOrder(root.right);
    }
    private static void printPreOrder(Node root)
    {
        if(root == null)
        return;

        System.out.print(root.data + " ");
        printPreOrder(root.left);
        printPreOrder(root.right);
    }
    private static void printPostOrder(Node root)
    {
        if(root == null)
        return;

        printPostOrder(root.left);
        printPostOrder(root.right);
        System.out.print(root.data + " ");
    }
    public static void main(String[] args)
    { 
       BinaryTree tree = new BinaryTree();
       tree.root = new Node(1);
       tree.root.left = new Node(2);
       tree.root.right = new Node(3);
       tree.root.left.left = new Node(4);

       printInOrder(tree.root);

       System.out.println();
       printPreOrder(tree.root);
       System.out.println();
       printPostOrder(tree.root);

    }
}