class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> ans;
        if(n%2 != 0)
        {
            return {};
        }
        sort(changed.begin(),changed.end());
        unordered_map<int,int> mp;
        for(int &i:changed)
        {
            mp[i]++;
        }
        for(int &i:changed)
        {
            int twice = 2*i;
            if(mp[i] == 0)
            {
                continue;
            }
            if(mp.find(twice) == mp.end() || mp[twice] == 0)
            {
                return {};
            }
            ans.push_back(i);
            mp[i]--;
            mp[twice]--;
        }
        return ans;
    }
};