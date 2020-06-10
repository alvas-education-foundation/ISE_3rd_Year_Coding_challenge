import java.util.HashMap; 
import java.util.Map; 
import java.lang.Math;

public class five {
 static int pickingNumbers(int[] a) {
  int count=0;
  int max=0;
  Arrays.sort(a);
 
   for(int i=0;i<a.length-1;i++)
      {
      for(int j=i+1;j<a.length;j++)
        {
        if(Math.abs(a[i]-a[j])<=1)
          {
          count++;
          }
       }
        if(count>max)
            max=count;
        count=0;
      }

   return max+1;
}

public static void main(String []args) 
{ 
          
        int n;
        Scanner sc = new Scanner(System.in);
        n== sc.nextInt();
        int [] arr = new int[n];
        for(int i=0; i<n; i++ ) {
           arr[i] = sc.nextInt();
      }
        System.out.println(pickingNumbers(arr));
}