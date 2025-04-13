from typing import List

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        n, m = len(s), len(p)
        if m > n:
            return []

        scount = [0] * 26
        pcount = [0] * 26
        ans = []

        for c in p:
            pcount[ord(c) - ord('a')] += 1

        for i in range(n):
            scount[ord(s[i]) - ord('a')] += 1
            if i >= m:
                scount[ord(s[i - m]) - ord('a')] -= 1
            if scount == pcount:
                ans.append(i - m + 1)

        return ans
