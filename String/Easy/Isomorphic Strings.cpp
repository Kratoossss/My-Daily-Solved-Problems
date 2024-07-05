class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if(s.size() != t.size())
        {
            return false;
        }
        unordered_map<char,char> mp1,mp2;
        for(int i=0 ; i<n ; i++)
        {
            char a = s[i];
            char b = t[i];
            if(mp1.find(a) != mp1.end())
            {
                if(b != mp1[a])
                {
                    return false;
                }
            }
            else
            {
                if(mp2.find(b) != mp2.end())
                {
                    return false;
                }
            }
            mp1[a] = b;
            mp2[b] = a;
        }
        return true;
    }
};