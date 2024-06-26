class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int freq = n/3;
        unordered_map<int,int> mp;
        for(int i=0 ; i<n ; i++)
        {
            mp[nums[i]]++;
        }

        for(auto i:mp)
        {
            if(i.second > freq)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};