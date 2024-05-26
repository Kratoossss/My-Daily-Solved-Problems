class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        set<vector<int>> s;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n ; i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum == target)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum > target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        for(auto i:s)
        {
            ans.push_back(i);        
        }
        return ans;

    }
};