class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        // O(n) Solution
        for(int i=0 ; i<n ; i++)
        {
            int num3 = nums[i];
            if(num3 <= num1)
            {
                num1 = num3;
            }
            else if(num3 <= num2)
            {
                num2 = num3;
            }
            else
            {
                return true;
            }
        }        
        return false;
        
        // O(n^3) Solution (Not working [Time limit exceeding])
        /*for(int i=0 ; i<n-2 ; i++)
        {
            for(int j=i+1 ; j<n-1 ; j++)
            {
                for(int k=j+1 ; k<n ; k++)
                {
                    if(nums[i]<nums[j] && nums[j]<nums[k] && nums[i]<nums[k])
                    {
                        return true;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        return false;*/
    }
};