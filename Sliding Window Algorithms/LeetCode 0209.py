class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        left = 0
        right = 0
        total = 0
        ans = float('inf')
        n = len(nums)

        while right < n:
            total += nums[right]
            right += 1
            while total >= target:
                ans = min(ans, right - left)
                total -= nums[left]
                left += 1

        return 0 if ans == float('inf') else ans
