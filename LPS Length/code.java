import util.*;

public class LongestPrefix
{
    public static int longestPrefixLength(String s)
  {
        int n = s.length();
        int[] lps = new int[n];
        int j = 0;
        for(int i = 1; i < n; i++)
        {
            while(j > 0 && s.charAt(i) != s.charAt(j))
            {
                j = lps[j - 1];
            }
            if(s.charAt(i) == s.charAt(j))
            {
                j++;
                lps[i] = j;
            }
        }
        return lps[n - 1];
    }

    public static void main(String[] args) {
        String s = "ababab";
        System.out.println(longestPrefixLength(s));
    }
}
