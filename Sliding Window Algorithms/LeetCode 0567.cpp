class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        if(m > n)
        {
            return false;
        }
        vector<int> count1(26, 0);
        vector<int> count2(26, 0);
        for(int i = 0; i < m; i++)
        {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        if(count1 == count2)
        {
            return true;
        }
        for(int i = m; i < n; i++)
        {
            count2[s2[i] - 'a']++;
            count2[s2[i - m] - 'a']--;
            if(count1 == count2)
            {
                return true;
            }
        }
        return false;
    }
};
