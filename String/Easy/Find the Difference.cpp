class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0 ; i<s.size() ; i++)
        {
            mp[s[i]]++;
        }
        for(int i=0 ; i<t.size() ; i++)
        {
            mp[t[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second%2 != 0)
            {
                return i.first;
            }
        }
        return 0;
    }
};