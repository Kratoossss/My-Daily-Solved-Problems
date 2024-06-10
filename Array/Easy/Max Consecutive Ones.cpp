class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int temp = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == 1)
            {
                temp++;
            }
            else
            {
                if(maxcount < temp)
                {
                    maxcount = temp;
                }
                temp = 0;
            }
        }
        if(temp>maxcount)
        {
            return temp;
        }
        return maxcount;
    }
};