class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int moves = 0;
        sort(nums.begin(),nums.end());
        for(int i=1 ; i<n ; i++)
        {
            if(nums[i] <= nums[i-1])
            {
                int diff = nums[i-1]-nums[i]+1;
                nums[i] += diff;
                moves += diff;
            }
        }
        return moves;
    }
};