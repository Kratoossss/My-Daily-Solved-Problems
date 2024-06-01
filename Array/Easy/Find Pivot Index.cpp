class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0 ; i<n ; i++)
        {
            sum += nums[i];
        }
        int s = 0;
        for(int i=0 ; i<n ; i++)
        {
            int leftsum = s;
            int rightsum = sum - leftsum - nums[i];
            if(leftsum == rightsum)
            {
                return i;
            }
            s += nums[i];  
        }
        return -1;
    }
};