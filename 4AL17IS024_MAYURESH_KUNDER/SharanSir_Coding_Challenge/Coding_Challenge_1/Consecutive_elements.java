import java.util.*;
import java.lang.*;
public class MK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] nums;
        System.out.println("Enter the size of the array");
        int size = sc.nextInt();
        nums = new int[size];
        System.out.println("Enter array elements");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }
        final HashSet<Integer> h_set = new HashSet<Integer>();
        for (int i : nums) h_set.add(i);
        int longest_sequence_len = 0;
        for (int i : nums) {
            int length = 1;
            for (int j = i - 1; h_set.contains(j); --j) {
                h_set.remove(j);
                ++length;
            }
            for (int j = i + 1; h_set.contains(j); ++j) {
                h_set.remove(j);
                ++length;
            }
            longest_sequence_len = Math.max(longest_sequence_len, length);
        }
        System.out.println("New length of the array is: "+longest_sequence_len);

    }

}
