from typing import List

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        m, n = len(s1), len(s2)
        if m > n:
            return False

        count1 = [0] * 26
        count2 = [0] * 26

        for i in range(m):
            count1[ord(s1[i]) - ord('a')] += 1
            count2[ord(s2[i]) - ord('a')] += 1

        if count1 == count2:
            return True

        for i in range(m, n):
            count2[ord(s2[i]) - ord('a')] += 1
            count2[ord(s2[i - m]) - ord('a')] -= 1
            if count1 == count2:
                return True

        return False
