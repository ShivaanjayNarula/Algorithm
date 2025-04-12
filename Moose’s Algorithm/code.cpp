#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> moose_algorithm(const vector<int>& arr)
{
    int n = arr.size();
    vector<int> dp(n, INT_MAX);
    dp[0] = arr[0];  // Base case: minimum for the first element is the element itself
    for(int i = 1; i < n; i++)
    {
        for(int j = i - 1; j >= 0; j--)
        {
            dp[i] = min(dp[i], min(arr[i], dp[j]));
        }
    }
    return dp;
}

int main()
{
    vector<int> arr = {4, 2, 7, 1, 3, 8, 5};
    vector<int> result = moose_algorithm(arr);
    cout << "DP Array (Minimums for subarrays): ";
    for(int i : result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
