class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(auto i:nums)
        {
            if(i >= 0)
            {
                pos.push_back(i);
            }
            else
            {
                neg.push_back(i);
            }
        }
        nums.clear();
        for(int i=0 ; i<pos.size() ; i++)
        {
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        return nums;
    }
};