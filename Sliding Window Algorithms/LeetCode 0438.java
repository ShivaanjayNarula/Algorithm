import java.util.*;

class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int n = s.length(), m = p.length();
        List<Integer> ans = new ArrayList<>();
        if(m > n)
        {
            return ans;
        }
        int[] scount = new int[26];
        int[] pcount = new int[26];

        for(char c : p.toCharArray())
        {
            pcount[c - 'a']++;
        }
        for(int i = 0; i < n; i++)
        {
            scount[s.charAt(i) - 'a']++;
            if(i >= m)
            {
                scount[s.charAt(i - m) - 'a']--;
            }
            if(Arrays.equals(scount, pcount))
            {
                ans.add(i - m + 1);
            }
        }
        return ans;
    }
}
