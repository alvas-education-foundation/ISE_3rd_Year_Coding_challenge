01. Write a java program to add two matrices


public class JavaExample {
    public static void main(String[] args) {
        int rows = 2, columns = 4;
        int[][] MatrixA = { {1, 1, 1, 1}, {2, 3, 5, 2} };
        int[][] MatrixB = { {2, 3, 4, 5}, {2, 2, 4, -4} };
        int[][] sum = new int[rows][columns];
        for(int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                sum[i][j] = MatrixA[i][j] + MatrixB[i][j];
            }
        }
        System.out.println("Sum of the given matrices is: ");
        for(int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                System.out.print(sum[i][j] + "    ");
            }
            System.out.println();
        }
    }
}






02. Write a java program to find ASCII value of a character





public class AsciiValue {
    public static void main(String[] args) {
        char ch = 'a';
        int ascii = ch;
        int castAscii = (int) ch;
        System.out.println("The ASCII value of " + ch + " is: " + ascii);
        System.out.println("The ASCII value of " + ch + " is: " + castAscii);
    }
}






03. Write a java program to search a node in a binary tree




public class SearchBinaryTree {  
      public static class Node{  
        int data;  
        Node left;  
        Node right;  
        public Node(int data){    
          this.data = data;  
          this.left = null;  
          this.right = null;  
        }  
      }    
      public Node root;  
      public static boolean flag = false;  
      public SearchBinaryTree(){  
        root = null;  
      }  
      public void searchNode(Node temp, int value){  
        if(root == null){  
          System.out.println("Tree is empty");  
        }  
        else{  
          if(temp.data == value){  
            flag = true;  
               return;  
          }    
          if(flag == false && temp.left != null){  
             searchNode(temp.left, value);  
          }  
          if(flag == false && temp.right != null){  
             searchNode(temp.right, value);  
          }  
        }  
      }  
      public static void main(String[] args) {  
        SearchBinaryTree bt = new SearchBinaryTree();  
        bt.root = new Node(1);  
        bt.root.left = new Node(2);  
        bt.root.right = new Node(3);  
        bt.root.left.left = new Node(4);  
        bt.root.right.left = new Node(5);  
        bt.root.right.right = new Node(6);  
        if(flag)  
          System.out.println("Element is present in the binary tree");  
        else  
          System.out.println("Element is not present in the binary tree");  
      }  
    }  







04. Write a java program to find the minimum and maximum value node in circular linked list






public class MinMax {  
    public class Node{  
        int data;  
        Node next;  
        public Node(int data) {  
            this.data = data;  
        }  
    }  
    public Node head = null;  
    public Node tail = null;  
    public void add(int data){  
        Node newNode = new Node(data);  
        if(head == null) {  
            head = newNode;  
            tail = newNode;  
            newNode.next = head;  
        }  
        else {  
            tail.next = newNode;   
            tail = newNode;  
            tail.next = head;  
        }  
    }  
    public void minNode() {  
        Node current = head;  
        int min = head.data;  
        if(head == null) {  
            System.out.println("List is empty");  
        }  
        else {  
             do{   
                 if(min > current.data) {  
                     min = current.data;  
                 }  
                 current= current.next;  
            }while(current != head);  
            System.out.println("Minimum value node in the list: "+ min);  
        }  
    }  
    public void maxNode() {  
        Node current = head;  
        int max = head.data;  
        if(head == null) {  
            System.out.println("List is empty");  
        }  
        else {  
             do{  
                 if(max < current.data) {  
                     max = current.data;  
                 }  
                 current= current.next;  
                }while(current != head);  
            System.out.println("Maximum value node in the list: "+ max);  
        }  
    }  
    public static void main(String[] args) {  
        MinMax cl = new MinMax();  
        cl.add(5);  
        cl.add(20);  
        cl.add(10);  
        cl.add(1);  
        cl.minNode();  
        cl.maxNode();  
    }  
}  