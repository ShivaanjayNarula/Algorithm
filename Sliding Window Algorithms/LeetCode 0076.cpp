class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        string ans = "";
        if(n > m)
        {
            return ans;
        }
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i = 0; i < n; i++)
        {
            mp2[t[i]]++;
        }
        int minlen = INT_MAX;
        int left = 0;
        int right = 0;
        int start = 0;
        int check = 0;
        while(right < m)
        {
            char ch = s[right];
            mp1[ch]++;
            if(mp2.count(ch) && mp1[ch] == mp2[ch])
            {
                check++;
            }
            while(check == mp2.size())
            {
                if(right - left + 1 < minlen)
                {
                    minlen = right - left + 1;
                    start = left;
                }
                mp1[s[left]]--;
                if(mp2.count(s[left]) && mp1[s[left]] < mp2[s[left]])
                {
                    check--;
                }
                left++;
            }
            right++;
        }
        if(minlen == INT_MAX)
        {
            return ans;
        }
        ans = s.substr(start, minlen);
        return ans;
    }
};
