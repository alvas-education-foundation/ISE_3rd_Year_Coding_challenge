import java.util.*;
import java.io.*;
import java.lang.*;

class TestClass {
    public static void main(String args[] ) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        char lower[] = new char[27];
        int i=1,weight=0;
        for(char ch='a';ch<='z';ch++)
        {
            lower[i] = ch;
            i++;
        }
        String str = br.readLine();
        for(int k = 0;k<str.length();k++)
        {
            for(int l=1;l<27;l++)
            {
                if(lower[l]==str.charAt(k))
                {
                    weight = weight + l;
                }
            }
        }

        System.out.println(weight);


    }
}
