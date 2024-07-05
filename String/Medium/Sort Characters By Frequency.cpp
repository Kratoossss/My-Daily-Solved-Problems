class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(int i=0 ; i<n ; i++)
        {
            mp[s[i]]++;
        }
        vector<pair<int,char>> pr ;
        for(auto i:mp)
        {
            pr.push_back({i.second,i.first});
        }
        sort(pr.begin(),pr.end(),greater<pair<int,char>>());
        string ans = "";
        for(auto i:pr)
        {
            int freq = i.first;
            int chr = i.second;
            while(freq != 0)
            {
                ans += chr;
                freq--;
            }
        }
        return ans;
    }
};