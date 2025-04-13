class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        left = 0
        right = 0
        ans = 0
        mp = {}

        while right < n:
            if s[right] not in mp or mp[s[right]] < left:
                mp[s[right]] = right
                ans = max(ans, right - left + 1)
            else:
                left = mp[s[right]] + 1
                mp[s[right]] = right
            right += 1

        return ans
