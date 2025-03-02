#include <iostream>
#include <vector>

using namespace std;

vector<int> computeLPS(const string &s)
{
    int n = s.size()
    int j = 0;
    vector<int> lps(n, 0);
    for(int i = 1; i < n; i++)
    {
        while(j > 0 && s[i] != s[j])
        {
            j = lps[j - 1];
        }
        if(s[i] == s[j])
        {
            j++;
        }
        lps[i] = j;
    }
    return lps;
}

int main()
{
    string s = "abacab";
    vector<int> lps = computeLPS(s);
    cout << "LPS Array: ";
    for (int x : lps) cout << x << " ";
    cout << endl;
    return 0;
}
