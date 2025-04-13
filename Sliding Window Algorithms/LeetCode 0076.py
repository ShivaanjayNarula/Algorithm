from collections import Counter, defaultdict

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        m, n = len(s), len(t)
        if n > m:
            return ""

        mp2 = Counter(t)
        mp1 = defaultdict(int)

        left = 0
        right = 0
        minlen = float('inf')
        start = 0
        check = 0

        while right < m:
            ch = s[right]
            mp1[ch] += 1
            if ch in mp2 and mp1[ch] == mp2[ch]:
                check += 1

            while check == len(mp2):
                if right - left + 1 < minlen:
                    minlen = right - left + 1
                    start = left
                mp1[s[left]] -= 1
                if s[left] in mp2 and mp1[s[left]] < mp2[s[left]]:
                    check -= 1
                left += 1

            right += 1

        return "" if minlen == float('inf') else s[start:start + minlen]
