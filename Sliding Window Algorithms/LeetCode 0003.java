import java.util.*;

class Solution{
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int left = 0, right = 0, ans = 0;
        HashMap<Character, Integer> map = new HashMap<>();
        while(right < n)
        {
            char c = s.charAt(right);
            if(!map.containsKey(c) || map.get(c) < left)
            {
                map.put(c, right);
                ans = Math.max(ans, right - left + 1);
            }
            else
            {
                left = map.get(c) + 1;
                map.put(c, right);
            }
            right++;
        }
        return ans;
    }
}
