class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int ans = INT_MAX;
        int add = 0;
        int n = nums.size();
        while(right < n)
        {
            add += nums[right++];
            while(add >= target)
            {
                ans = min(ans, right - left);
                add -= nums[left++];
            }
        }
        if(ans == INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};
