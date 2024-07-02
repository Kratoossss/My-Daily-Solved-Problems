class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> v;
        string ans = "";
        string temp = "";
        for(int i=0 ; i<n ; i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                if(temp.size() !=0)
                {
                    v.push_back(temp);
                    temp = "";
                }
            }
        }
        if(temp.size() != 0 )
        {
            v.push_back(temp);
        }
        for(int i=v.size()-1 ; i>0 ; i--)
        {
            ans += v[i];
            ans += ' ';
        }
        ans += v[0];
        return ans;
    }
};