class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        double count = 0;
        for(int i=0 ; i<n ; i++)
        {
            double prod = 1;
            int j = i;
            for(int j=i ; j<n ; j++)
            {
                prod *= nums[j];
                if(prod >= k)
                {
                    break;
                }
                count++;
            }
        }
        return count;
    }
};