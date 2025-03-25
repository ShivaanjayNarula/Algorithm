#include <iostream>
#include <vector>

using namespace std;

int longestPrefixLength(string s) {
    int n = s.size();
    vector<int> lps(n, 0);
    int j = 0;
    for(int i = 1; i < n; i++)
    {
        while(j > 0 && s[i] != s[j])
        {
            j = lps[j - 1];
        }
        if(s[i] == s[j])
        {
            j++;
            lps[i] = j;
        }
    }
    return lps[n - 1];
}

int main()
{
    string s = "ababab";
    cout << longestPrefixLength(s) << endl;
    return 0;
}
