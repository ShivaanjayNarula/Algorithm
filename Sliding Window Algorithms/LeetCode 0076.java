import java.util.*;

class Solution {
    public String minWindow(String s, String t) {
        int m = s.length();
        int n = t.length();
        if(n > m)
        {
            return "";
        }
        HashMap<Character, Integer> mp1 = new HashMap<>();
        HashMap<Character, Integer> mp2 = new HashMap<>();

        for(char c : t.toCharArray())
        {
            mp2.put(c, mp2.getOrDefault(c, 0) + 1);
        }
        int left = 0;
        int right = 0;
        int start = 0;
        int minLen = Integer.MAX_VALUE;
        int check = 0;

        while(right < m)
        {
            char ch = s.charAt(right);
            mp1.put(ch, mp1.getOrDefault(ch, 0) + 1);
            if(mp2.containsKey(ch) && mp1.get(ch).intValue() == mp2.get(ch).intValue())
            {
                check++;
            }
            while(check == mp2.size())
            {
                if(right - left + 1 < minLen)
                {
                    minLen = right - left + 1;
                    start = left;
                }
                char leftChar = s.charAt(left);
                mp1.put(leftChar, mp1.get(leftChar) - 1);
                if(mp2.containsKey(leftChar) && mp1.get(leftChar) < mp2.get(leftChar))
                {
                    check--;
                }
                left++;
            }
            right++;
        }
        return (minLen == Integer.MAX_VALUE) ? "" : s.substring(start, start + minLen);
    }
}
