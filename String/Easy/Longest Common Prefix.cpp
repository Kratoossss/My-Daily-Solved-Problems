class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string beg = strs[0];
        string end = strs[n-1];
        for(int i=0 ; i<beg.size() ; i++)
        {
            if(beg[i] == end[i])
            {
                ans += beg[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};