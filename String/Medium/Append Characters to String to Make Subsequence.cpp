class Solution {
public:
    int appendCharacters(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        int i = 0;
        int j = 0;
        int count = 0;
        while(i<sl && j<tl)
        {
            if(s[i] == t[j])
            {
                j++;
            }
            i++;
        }
        count = tl - j;
        return count;
    }
};