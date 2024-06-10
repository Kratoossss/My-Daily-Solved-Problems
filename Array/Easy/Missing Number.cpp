class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int mnum = 0;
      sort(nums.begin(),nums.end());
      for(int i=0 ; i<nums.size() ; i++)
      {
        if(nums[i] == mnum)
        {
            mnum++;
        }
        else
        {
            break;
        }
      }
      return mnum;  
    }
};