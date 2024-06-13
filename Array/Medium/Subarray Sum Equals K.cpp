class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int count = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            sum += nums[i];
            int remove = sum - k;
            if(mp.find(remove) != mp.end())
            {
                count += mp[remove];
            }
            mp[sum]++;
        }
        return count;
    }
};