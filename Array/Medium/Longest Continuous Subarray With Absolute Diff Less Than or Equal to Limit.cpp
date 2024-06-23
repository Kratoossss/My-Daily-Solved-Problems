class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        multiset<int> m;
        int length = 0;
        int i = 0;
        int j = 0;
        while(j < n)
        {
            m.insert(nums[j]);
            if(*m.rbegin()-*m.begin() > limit)
            {
                m.erase(m.find(nums[i]));
                i++;
            }
            length = max(length,j-i+1); 
            j++;
        }
        return length;
    }
};