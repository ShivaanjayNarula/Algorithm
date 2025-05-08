import java.util.*;

public class LPSArray
{
    public static int[] computeLPS(String s)
  {
        int n = s.length();
        int j = 0;
        int[] lps = new int[n];
        for(int i = 1; i < n; i++)
        {
            while(j > 0 && s.charAt(i) != s.charAt(j))
            {
                j = lps[j - 1];
            }
            if(s.charAt(i) == s.charAt(j))
            {
                j++;
            }
            lps[i] = j;
        }
        return lps;
    }

    public static void main(String[] args) {
        String s = "abacab";
        int[] lps = computeLPS(s);
        System.out.print("LPS Array: ");
        for (int x : lps) {
            System.out.print(x + " ");
        }
        System.out.println();
    }
}
