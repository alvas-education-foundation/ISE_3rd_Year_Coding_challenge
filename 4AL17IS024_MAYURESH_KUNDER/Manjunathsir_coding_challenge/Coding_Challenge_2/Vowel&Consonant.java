import java.util.*;
import java.lang.*;
public class MK {
    static HashSet<String> st = new HashSet<>();
    static void subsequence(String str)
    {
        for (int i = 0; i < str.length(); i++) {
            if (isVowel(str.charAt(i))) {
                for (int j = (str.length() - 1); j >= i; j--) {
                    if (isConsonant(str.charAt((j)))) {
                        String str_sub = str.substring(i, j + 1);
                        st.add(str_sub);
                        for (int k = 1; k < str_sub.length() - 1; k++) {
                            StringBuffer sb = new StringBuffer(str_sub);
                            sb.deleteCharAt(k);
                            subsequence(sb.toString());
                        }
                    }
                }
            }
        }
    }
    static boolean isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o'
                || c == 'u');
    }
    static boolean isConsonant(char c)
    {
        return !isVowel(c);
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        subsequence(s);
        System.out.println(st);
    }

}


