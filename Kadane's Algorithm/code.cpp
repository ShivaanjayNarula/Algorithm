#include <iostream>
#include <vector>
using namespace std;

pair<int, vector<int>> kadaneWithSubarray(vector<int>& nums) {
    int max_ending_here = nums[0], max_so_far = nums[0];
    int start = 0, end = 0, temp_start = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > max_ending_here + nums[i]) {
            max_ending_here = nums[i];
            temp_start = i;
        } else {
            max_ending_here += nums[i];
        }

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
            start = temp_start;
            end = i;
        }
    }

    vector<int> subarray(nums.begin() + start, nums.begin() + end + 1);
    return {max_so_far, subarray};
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    auto result = kadaneWithSubarray(arr);

    cout << "Max Subarray Sum: " << result.first << endl;
    cout << "Subarray: ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
