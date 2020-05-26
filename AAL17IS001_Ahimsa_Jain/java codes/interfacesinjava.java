2. You are given an interface AdvancedArithmetic which contains a method signature int divisor_sum(int n). You need to write a class called MyCalculator which implements the interface.
class MyCalculator implements AdvancedArithmetic {
    int j = 0;
   public int divisor_sum(int n) {
        for(int i = 1; i <= n; i++) {
            if (n % i == 0) {
                j = j + i; 
            }
        }
        return j;
    }
   
}
