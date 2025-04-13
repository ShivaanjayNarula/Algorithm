class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        if(m > n)
        {
            return ans;
        }
        vector<int> scount(26, 0);
        vector<int> pcount(26, 0);
        for(char c : p)
        {
            pcount[c-'a']++;
        }
        for(int i = 0; i < n; i++)
        {
            scount[s[i] - 'a']++;
            if(i >= m)
            {
                scount[s[i-m] - 'a']--;
            }
            if(pcount == scount)
            {
                ans.push_back(i - m + 1);
            }
        }
        return ans;
    }
};
