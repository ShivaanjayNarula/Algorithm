class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int ans = Integer.MAX_VALUE;
        int n = nums.length;
        while(right < n)
        {
            sum += nums[right++];
            while(sum >= target)
            {
                ans = Math.min(ans, right - left);
                sum -= nums[left++];
            }
        }
        if(ans == Integer.MAX_VALUE)
        {
            return 0;
        }
        return ans;
    }
}
