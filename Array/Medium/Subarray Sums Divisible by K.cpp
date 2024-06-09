class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> mp;  //<remainder,frequency>
        mp[0] = 1;
        for( int i=0 ; i<nums.size() ; i++)
        {
            sum += nums[i];
            int rem = sum%k;
            if(rem < 0)
            {
                rem += k;
            }
            if(mp.find(rem) != mp.end())
            {
                ans += mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};