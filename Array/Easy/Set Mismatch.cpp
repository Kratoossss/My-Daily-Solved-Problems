class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        //sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0 ; i<n ; i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] == 2)
            {
                ans.push_back(nums[i]);
            }
        }
        for(int i=1 ; i<=n ; i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};