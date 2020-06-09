3.Java program to print Hollow Inverted Pyramid star pattern program.

class prog3{ 
      
    public static void main(String args[]) 
    { 
        int n = 6; 
      
        printPattern(n); 
    } 
      
    static void printPattern(int n) 
    { 
        int i, j, k = 0; 
        for (i = 1; i <= n; i++) // row=6 
        { 
            // Print spaces 
            for (j = i; j < n; j++) { 
                System.out.print(" "); 
            }  
            while (k != (2 * i - 1)) { 
                if (k == 0 || k == 2 * i - 2) 
                    System.out.print("*"); 
                else
                    System.out.print(" "); 
                k++; 
                ; 
            } 
            k = 0; 
            System.out.println();  
        } 
        for (i = 0; i < 2 * n - 1; i++) { 
            System.out.print("*"); 
        } 
    } 
} 
  