class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                int k = j+1;
                int l = n-1;
                while(k < l)
                {
                    long sum = (long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum == target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(sum > target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
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