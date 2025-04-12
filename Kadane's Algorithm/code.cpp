#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> allMaxSubarrays(vector<int>& nums)
{
    int max_ending_here = nums[0], max_so_far = nums[0];
    int start = 0;
    vector<vector<int>> result = {{nums[0]}};
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] > max_ending_here + nums[i])
        {
            max_ending_here = nums[i];
            start = i;
        }
        else
        {
            max_ending_here += nums[i];
        }
        if(max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
            result.clear();
            result.push_back(vector<int>(nums.begin() + start, nums.begin() + i + 1));
        }
        else if(max_ending_here == max_so_far)
        {
            result.push_back(vector<int>(nums.begin() + start, nums.begin() + i + 1));
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<vector<int>> maxSubs = allMaxSubarrays(arr);
    cout << "All Max Subarrays:\n";
    for(auto& sub : maxSubs)
    {
        for(int num : sub)
            {
                cout << num << " ";
            }
        cout << endl;
    }
    return 0;
}
